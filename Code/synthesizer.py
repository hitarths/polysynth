import os, sys, random, lark, queue, copy, datetime, pdb, argparse, time, math
import sympy as sp
from sympy.matrices import Matrix
from parser import get_parser
from polynomial import Polynomial
from z3 import *
from PolynomialTS import PolynomialTS, graph_preprocessor
from parser_utils import write_symbolic_program

random.seed(0)
debug = True
tree = None
bound = 100

condition_pairs = []
variables_index = None
all_unknown_coefficients = []
unknown_coefficients_index = 0
all_real_vars = dict()

sp_unit = 1
unit_poly = Polynomial({sp_unit: 1})

def program_to_tree(src):
    src_lines = src.split("\n")
    parser = get_parser()
    tree = parser.parse(src)
    return tree

###########################################################
#                   POSITIVSTELLENSATZ                    #
###########################################################

QP = []

cond_index_to_monomials = {}
all_ls_name = []
M_index = 0
M_dict = {}
inv_M_dict = {}

def all_vars_in_list_of_poly(lst):
    variables = set()
    for f in lst:
        for mono in f.monomial_dict:
            if type(mono) == int:
                continue
            variables = variables.union(mono.free_symbols)
    return {str(x): x for x in variables} # return the dictionary of variable name: sympy variable


def monomial_vector(real_vars, k): #creates all monomials of degree smaller than k as a vector
    all_mono = {sp_unit}
    cur_mono = {sp_unit}
    for i in range(k):
        new_mono = set()
        for v in real_vars:
            var = real_vars[v]
            for m in cur_mono:
                new_mono.add(m*var);
        all_mono = all_mono.union(new_mono)
        cur_mono = new_mono

    ans=list(map(lambda x: [Polynomial({x: 1})],all_mono))
    # print(f"monomials of order {k} are {ans}")
    return ans

l_cnt = 0
h_complexity_code_to_randomness = {
                            2: 0.1, 
                            3: 0.2, 
                            4: 0.3,
                            5: 0.4,
                            6: 0.5,
                            7: 0.6,
                            8: 0.7,
                            9: 0.8,
                            10: 0.9
                            }

def get_l_name(cond_index, with_handelman, index):
    t = 1 if with_handelman else 0
    return "l_{}_{}_{}".format(t, cond_index, index) 

def split_l_name(l_name):
    return l_name.split("_")[1:]

def generate_new_lower_triangular_matrix(n, cond_index, with_handelman, l_names, positive_l_names, l_cnt): 
    """
    Generates a lower traingular matrix (via Cholskey Decomposition)
    """
    ans = []
    for i in range(n):
        row = []
        for j in range(n):
            if j <= i:
                l_cnt[0] +=1
                fresh_var_name = get_l_name(cond_index, with_handelman, l_cnt[0])
                l_names.append(fresh_var_name)
                fresh_var = Polynomial({sp_unit: sp.Symbol(fresh_var_name)})
                row += [fresh_var]
                if i==j:
                    positive_l_names.append(fresh_var_name)
            else:
                row += [Polynomial({})]
        ans += [row]
    m = ans
    return m

def transpose_poly_matrix(mat):
    dimr = len(mat)
    dimc = len(mat[0])
    result = [[None for i in range(dimr)] for j in range(dimc)]
    for i in range(dimr):
        for j in range(dimc):
            result[j][i] = mat[i][j]
    return result

def multiply_poly_matrices(mat1, mat2):
    """
    Assume matrices are 2D as list of lists, and both matrices are nonempty
    """
    dim1r = len(mat1)
    dim1c = len(mat1[0])
    dim2r = len(mat2)
    dim2c = len(mat2[0])
    if (dim1c != dim2r):
        raise Exception("Matrices dimension mismatch!")
    result = [[Polynomial({}) for i in range(dim2c)] for j in range(dim1r)]
    for i in range(dim1r):
        for j in range(dim2c):
            for k in range(dim1c):
                result[i][j] += mat1[i][k]*mat2[k][j] 
    return result


def handelman_monoid(lst, d):
    # print("Generating Handleman Monoid...")
    all_mono = {unit_poly}
    cur_mono = {unit_poly}
    for i in range(1, d+1):
        new_mono = set()
        for poly in lst:
            for m in cur_mono:
                new_m = m*poly
                new_mono.add(new_m);
        all_mono = all_mono.union(new_mono)
        cur_mono = new_mono
    return list(all_mono)

def generate_base_QP_dict(condition_pairs, h_degree):
    """
    Assuming condition_pair = (alpha, beta, real_vars: Dictionary)
    """
    QP_dict = dict()
    QP_with_Handelman_dict = dict()

    for cond_index in range(len(condition_pairs)):
        condition_pair = condition_pairs[cond_index]
        # print(f"Handling constraint pair: {cond_index}...")
        QP_dict[cond_index]  = get_QP_for_condition_pair(condition_pair, cond_index, False, h_degree)
        if apply_handelman:
            QP_with_Handelman_dict[cond_index] = get_QP_for_condition_pair(condition_pair, cond_index, True, h_degree)
        else:
            QP_with_Handelman_dict =dict()

    return QP_dict, QP_with_Handelman_dict


def get_QP_for_condition_pair(condition_pair, cond_index, with_handelman, h_degree):
    l_names  = []
    positive_l_names = []
    l_cnt = [0]
    (pre, post, real_vars) = condition_pair
    vars_in_condition_pair = all_vars_in_list_of_poly(pre+post)
    # find the largest total degree in the polynomials
    largest_degree = max(map(lambda x: x.total_degree, pre+post))
    largest_degree = max(largest_degree, post[0].total_degree)
    current_h_degree = 1 if largest_degree == 1 else h_degree
    with_farkas = (current_h_degree == 1) # if largest_degree is 1, then apply farkas
    if not with_farkas and with_handelman:
        pre = handelman_monoid(pre, 2) # compute the monoid if it is not farkas
    y = monomial_vector(vars_in_condition_pair, int(h_degree/2))
    dim = len(y)

    pre.append(Polynomial({sp_unit: 1}))
    lhs = post[0]
    rhs = Polynomial({})
    for f in pre:
        # print("Processing: ", f)
        if with_farkas or with_handelman:
            # both farkas and handelman use a single l var
            hM = generate_new_lower_triangular_matrix(1, cond_index, with_handelman, l_names, positive_l_names, l_cnt)
        else:
            L = generate_new_lower_triangular_matrix(dim,cond_index, with_handelman, l_names, positive_l_names, l_cnt)
            yL = multiply_poly_matrices(transpose_poly_matrix(y), L)
            hM =  multiply_poly_matrices(yL, transpose_poly_matrix(yL))
        h = hM[0][0]
        rhs = rhs + (f * h)

    # add a sum of square of degree h_degree extra if handelman
    if with_handelman:
        L = generate_new_lower_triangular_matrix(dim,cond_index, with_handelman, l_names, positive_l_names, l_cnt)
        yL = multiply_poly_matrices(transpose_poly_matrix(y), L)
        hM =  multiply_poly_matrices(yL, transpose_poly_matrix(yL))    
        h0 = hM[0][0]
        rhs = rhs + h0

    zero_poly = lhs - rhs
    zero_conds, monomial_list_of_poly = zero_poly.get_eq_zero_conditions()

    return zero_conds, l_names, positive_l_names
    # useful_ls_for_cond_pair_for_monomial[cond_index] = {}
    # for c in range(len(zero_conds)):
    #     useful_ls_for_cond_pair_for_monomial[cond_index][monomial_list_of_poly[c]] = l_vars_in_expression(zero_conds[c])
    # print("LHS: {}\nRHS: {}".format(lhs, rhs))
    # print("Following constraints are generated:")
    # for i in list(lhs.monomial_dict.keys()) + list(rhs.monomial_dict.keys()):
    #     lcoff = lhs.monomial_dict[i] if i in lhs.monomial_dict else 0
    #     rcoff = rhs.monomial_dict[i] if i in rhs.monomial_dict else 0
    #     print("\t{}: {} = {}".format(i, lcoff, rcoff))

    # for c in range(len(zero_conds)):
    #     cond = zero_conds[c]
    #     M_dict[f"M_{M_index}"] = (cond_index, monomial_list_of_poly[c], cond)
    #     if c in zero_conds:
    #         raise Exception("Ambiguitiy encountered for inv_M_dict!")
    #     inv_M_dict[zero_conds[c]] = f"M_{M_index}"
    #     M_index += 1

def get_monomial_from_poly(y):
    lst = []
    for poly_lst in y:
        poly = poly_lst[0]
        lst.append(list(poly.monomial_dict.keys())[0])
    return lst

def l_vars_in_expression(cond):
    lst = []
    atoms = cond.atoms()
    for atom in atoms:
        if str(atom).startswith("l"):
            lst.append(atom)
    return list(map(str,lst))


def pow_to_mul(expr):
    """
    Convert integer powers in an expression to Muls, like a**2 => a*a.
    """
    pows = list(expr.atoms(sp.Pow))
    repl = zip(pows, [sp.Mul(*[b]*e,evaluate=False) for b,e in (i.as_base_exp() for i in pows)])
    dic = {a[0]: a[1] for a in repl}
    return expr.subs(dic)


def get_lst_lines_for_z3(zero_conds, cond_index, with_assert = True):
    m_cnt = 0
    lst_lines = []
    for i in zero_conds:
        if i == sp.sympify("True"):
            line = None
            continue
        elif i == sp.sympify("False"):
            line = f"s.add({i})\n"
            lst_lines = [line]
            break
        elif type(i) == sp.core.relational.GreaterThan:
            expr = pow_to_mul(i.lhs)
            line = f"s.add( ({expr}>={pow_to_mul(i.rhs)}))\n"
        elif type(i) == sp.core.relational.Equality:
            if with_assert:
                line = f"s.assert_and_track(({pow_to_mul(i.lhs)} == {pow_to_mul(i.rhs)}), 'M_{cond_index}_{m_cnt}')\n"
            else:
                line = f"s.add(({pow_to_mul(i.lhs)} == {pow_to_mul(i.rhs)}))\n"
            m_cnt +=1 
        else:
            raise Exception("Unknown constraint type in QP")
        if line:
            lst_lines.append(line)
    return lst_lines


def solve_with_abstraction_refinement(QP_dict, QP_with_Handelman_dict, with_abstraction = True):
    # print(inv_M_dict)
    with_handelman_dict = {cond_index : apply_handelman for cond_index in QP_dict}
    print("-"*10)

    if with_abstraction:
        print("Solving with Abstraction Refinement Heuristics...")
    else:
        print("Solving with Z3 without Heuristics...")


    print("Initiated solver...")
    for i in all_unknown_coefficients:
        line = f"{i} = Real('{i}')"
        exec(line)
    for cond_index in QP_dict:
        l_names= QP_dict[cond_index][1]
        if apply_handelman:
            Hl_names = QP_with_Handelman_dict[cond_index][1]
            for l in Hl_names:
                line = f"{l} = Real('{l}')"
                exec(line)
        for l in l_names:
            line = f"{l} = Real('{l}')"
            exec(line)
        


    while True:
        s = Solver()
        s.set(unsat_core=True)
        all_ls = 0
        set_ls_zero = set()
        with sp.core.parameters.evaluate(0):
            for cond_index in QP_dict:
                do_exit = False
                with_handelman = with_handelman_dict[cond_index]
                if with_handelman:
                    zero_conds, l_names, positive_l_names = QP_with_Handelman_dict[cond_index]
                else:
                    zero_conds, l_names, positive_l_names = QP_dict[cond_index]
                all_ls += len(l_names)
                if with_abstraction:
                    for l in l_names:
                        if random.random() <= dropping_probability:
                            set_ls_zero.add(l)
                lst_lines = get_lst_lines_for_z3(zero_conds, cond_index)

                for l in lst_lines:
                    exec(l)
                for l in positive_l_names:
                    line = f"s.add({l} >= 0)\n"
                    exec(line)
        
        # now we have the base solver instance
        while True:
            s.push()
            for l in set_ls_zero:
                l = f"s.assert_and_track({l} == 0, '{str(l)}')"
                exec(l)
            # pushed all the l's that are zero
            print("Total number of ls being used is {} out of {}".format(all_ls - len(set_ls_zero), all_ls))
            print("Checking the satisfiability...")
            res = s.check()
            print("#"*100)
            if (str(res) == "sat"):
                model = s.model()
                input_prog =  output_file_base + ".symbolic"
                output_prog = output_file_base + ".synth"
                print("Model:", model)
                update_symbolic_program(input_prog, output_prog, model)
                print("Synthesized program saved at: ", output_prog)
                return 1
            else:
                # print(s)
                core = s.unsat_core()
                print(f"UNSAT core found: {core[:10]}...")
                should_check = True
                unsat = True
                for M in core:
                    if not should_check:
                        break
                    if "l" in str(M):
                        l_name = str(M)
                        print(f"Relaxing {l_name}...")
                        set_ls_zero.remove(l_name)
                        should_check = False
                        unsat = False
                        break
                refresh = False
                if unsat:
                    for M in core:
                        if "M" in str(M):
                            cond_index, m_cnt = list(map(int, str(M).split("_")[1:]))

                        print("Constraint Pair: {} - Monomial Number: {} ".format(cond_index, m_cnt))
                        if with_handelman_dict[cond_index]:
                            with_handelman_dict[cond_index] = False
                            refresh = True
                            break
                    if not refresh:
                        raise Exception("Final Result: UNSAT")
                if refresh:
                    print("Reinitializing the solver...")
                    print("Using Handelman for {} constraint pairs...".format(sum(with_handelman_dict)))
                    break
            s.pop()

def print_qp_for_z3(QP_dict, smt_output_filename):

    for i in all_unknown_coefficients:
        line = f"{i} = Real('{i}')"
        exec(line)
    for cond_index in QP_dict:
        l_names= QP_dict[cond_index][1]
        for l in l_names:
            line = f"{l} = Real('{l}')"
            exec(line)

    print("#"*100)
    print("Saving the .smt2 for the constraint pair at: ", smt_output_filename)
    s = Solver()
    s.set(unsat_core=True)
    all_ls = 0
    set_ls_zero = set()
    with sp.core.parameters.evaluate(0):
        for cond_index in QP_dict:
            do_exit = False
            zero_conds, l_names, positive_l_names = QP_dict[cond_index]
            all_ls += len(l_names)
            lst_lines = get_lst_lines_for_z3(zero_conds, cond_index, with_assert = False)
            for l in lst_lines:
                exec(l)
            for l in positive_l_names:
                line = f"s.add({l} >= 0)\n"
                exec(line)
    # now save the constraints in smt format in a file
    f=open(smt_output_filename, "w")
    f.write("(set-option :produce-models true)")
    f.write(s.to_smt2())
    f.write("(get-model)")


def print_qp_for_ampl(): #does not substitute p
    f = open("ampl-run-{}.mod".format(file_name), "w")
    for i in all_unknown_coefficients:
        f.write(f"{i} = Real('{i}')\n")
    for i in real_vars:
        f.write(f"{i} = Real('{i}')\n")
    for i in range(l_cnt+1):
        f.write(f"l_{i} = Real('l_{i}')\n")
    M_cnt = 0
    
    f.write("minimize z: 1;\n\n")
    counter_assert = 0
    lst_lines = []
    with sp.core.parameters.evaluate(0):
        for i in QP:
            if i == sp.sympify("True"):
                line = None
                continue
            elif i == sp.sympify("False"):
                # QP is unsat, so break
                line = "s.t. M_0: 0 = 1\n"
                lst_lines = [line]
                break
            elif type(i) == sp.core.relational.GreaterThan:
                line =f"s.t. M_{counter_assert}: {i};\n".replace("**", "^")
                counter_assert += 1
            elif type(i) == sp.core.relational.Equality:
                line = f"s.t. M_{counter_assert}: {i.lhs} = {i.rhs};\n".replace("**", "^")
                counter_assert += 1
            else:
                raise Exception("Unknown constraint type in QP")
            if line:
                lst_lines.append(line)
    f.writelines(lst_lines)
    f.close()


def print_qp_for_julia(): #does not substitute p
    julia_file_name = file_name + "julia.mod"
    f = open(julia_file_name, "w")
    f.write("""using JuMP
using Ipopt
model = Model(Ipopt.Optimizer)
\n""")
    for i in all_unknown_coefficients:
        f.write(f"@variable(model, {i})\n")

    for i in real_vars:
        f.write(f"@variable(model, {-bound} <= {i} <= {bound})\n")
    for i in range(l_cnt+1):
        f.write(f"@variable(model, l_{i})\n")
    M_cnt = 0
    
    f.write("\n@NLobjective(model, Min, 1);\n")
    counter_assert = 0
    lst_lines = []
    with sp.core.parameters.evaluate(0):
        for i in QP:
            if i == sp.sympify("True"):
                line = None
                continue
            elif i == sp.sympify("False"):
                line = f"@NLconstraint(model, c0, 0 == 1\n"
                lst_lines = [line]
                break
            elif type(i) == sp.core.relational.GreaterThan:
                # expr = pow_to_mul(i.lhs)
                line = f"@NLconstraint(model, c{counter_assert}, {i})\n".replace("**", "^")
                counter_assert += 1
            elif type(i) == sp.core.relational.Equality:
                line = f"@NLconstraint(model, c{counter_assert}, {i.lhs} == {i.rhs})\n".replace("**", "^")
                counter_assert += 1
            else:
                raise Exception("Unknown constraint type in QP")
            if line:
                lst_lines.append(line)
    f.writelines(lst_lines)
    f.write("""print(model)
optimize!(model)
@show termination_status(model)
@show primal_status(model)
@show dual_status(model)
@show objective_value(model)
""")

    for i in all_unknown_coefficients:
        f.write(f"@show value({i})\n")
    f.close()


def print_mat(mat):
    for i in mat:
        print(i)

##### Abstraction Refinement ####

def update_symbolic_program(file_name, output_file, model):
        # Read in the file
    with open(file_name, 'r') as file :
      filedata = file.read()

    # Replace the target string
    for var in model:
        s_var = str(var)
        if s_var.startswith("_a"): # symbolic variables start with _a
            filedata = filedata.replace(s_var, str(model[var]))

    # Write the file out again

    print("\n\n")
    print("*"*20)
    print("Synthesized Program")
    print(filedata)
    with open(output_file, 'w') as file:
      file.write(filedata)


def graph_main(src, file_name):
    global all_unknown_coefficients, unknown_coefficients_index
    log_file = file_name + ".log"
    with open(log_file, "a+") as log:
        log.write("#"*10)
        log.write("\nExecution start time: "+ str(datetime.datetime.now()))
        log.write("\n")
    start = time.time()
    tree = program_to_tree(src)
    graph, symbolic_polynomial_program, all_unknown_coefficients = graph_preprocessor(tree, file_name)
    write_symbolic_program(symbolic_polynomial_program, output_file_base + ".symbolic")
    # pdb.set_trace()
    graph.print()
    # graph.plot()
    CP = graph.get_constraint_pairs()
    # create new condition pairs for each condition in post
    temp_condition_pair = []
    all_real_vars = dict()
    for (pre, post, real_vars) in CP:
        all_real_vars.update(real_vars)
        for lhs in post:
            temp_condition_pair.append((pre, [lhs], real_vars))
    condition_pairs = temp_condition_pair

    end = time.time()
    with open(log_file, "a+") as log:
        log.write("Constraint Pair Generation Time: %.8f s\n"%((end-start)))

    print("\nFollowing constraint pairs are generated:\n\n")
    print("\n" + "#"*100)
    for index in range(len(condition_pairs)):
        i = condition_pairs[index]
        for j in i[0]:
            print("\tPre -- {}".format(j))
        print('\t\tImplies -- {}'.format(i[1]))
        print("\n" + "#"*100)

    start = time.time()
    QP_dict, QP_with_Handelman_dict = generate_base_QP_dict(condition_pairs, h_degree)
    end =time.time()
    with open(log_file, "a+") as log:
        log.write("QP Generation Time: %.8fs\n"%((end-start)))
        log.write("QP with handelman size: {}\nQP without handelman size: {}\n".format(
            sum([len(QP_with_Handelman_dict[i][0]) for i in QP_with_Handelman_dict]),
            sum([len(QP_dict[i][0]) for i in QP_with_Handelman_dict]),
            ))
        log.write("Number of L-vars with handelman: {}\nNumber of L-vars without handelman: {}\n".format(
            sum([len(QP_with_Handelman_dict[i][1]) for i in QP_with_Handelman_dict]),
            sum([len(QP_dict[i][1]) for i in QP_with_Handelman_dict]),
            ))

    print_qp_for_z3(QP_dict, output_file_base + "-putinar-h_{}.smt2".format(h_degree))
    print_qp_for_z3(QP_with_Handelman_dict, output_file_base + "-handelman-h_{}.smt2".format(h_degree))

    if not only_smtlib:
        start = time.time()
        solve_with_abstraction_refinement(QP_dict, QP_with_Handelman_dict, with_abstraction = apply_heuristics)
        end =time.time()
        with open(log_file, "a+") as log:
            log.write("Z3 with Heuristics Solving Time: %.8fs\n"%((end-start)))
    return graph


if __name__ == '__main__':
    parser = argparse.ArgumentParser(
                    prog = 'PolySynth',
                    description = 'Program to synthesize polynomial programs from the template',
                    # epilog = ''
                    )

    parser.add_argument('--filename', dest="filename", type=str, help='Path to the template to synthesize')
    parser.add_argument('--target', dest="target", type=str, help='Path to the output folder', default="")
    parser.add_argument('--h-degree', dest="h_degree", type=int, help='h degree for the stellensatze', default=2)
    parser.add_argument('--apply-handelman', dest="apply_handelman", type=int, help='Select whether to apply handelman or not (0 or 1)', default=1)
    parser.add_argument('--apply-heuristics', dest="apply_heuristics", type=int, help='Select whether to apply abstraction/refinemend based heuristics or not (0 or 1)', default=1)
    parser.add_argument('--only-smtlib-files', dest="only_smtlib", type=int, help='Select whether to only create smtlib2 files (0 or 1)', default=0)

    args = parser.parse_args()
    real_vars = function_vars = None
    file_name= args.filename
    src = open(file_name).read()
    h_degree = args.h_degree
    dropping_probability = 0.99   # Used in the heuristics for solving
    apply_heuristics = args.apply_heuristics
    apply_handelman = args.apply_handelman
    only_smtlib = args.only_smtlib
    output = args.target
    
    if not output:
        output = os.path.dirname(file_name) # if output folder is not specified, it is the folder of input file
    
    if not os.path.isdir(output):
        os.makedirs(output)
    output_file_base = os.path.join(output, os.path.basename(file_name))

    if apply_handelman:
        print("Using handelman...")

    graph_main(src, file_name)
