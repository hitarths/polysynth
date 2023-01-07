import os, sys, random, lark, queue, copy, datetime, pdb, argparse, time, math, datetime
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

def solve_directly_with_z3(condition_pairs):
    print("Initiated solver...")
    for i in all_unknown_coefficients:
        line = f"{i} = Real('{i}')"
        exec(line)

    for_all_vars = set()
    for index in range(len(condition_pairs)):
        pre, post, real_vars = condition_pairs[index]
        all_vars = all_vars_in_list_of_poly(pre + post)
        for v in all_vars:
            var = all_vars[v]
            if var not in all_unknown_coefficients and var not in for_all_vars:
                for_all_vars.add(var)

    for_all_vars = list(for_all_vars)
    for_all_vars_z3 = []
    for i in for_all_vars:
        line = f"{i} = Real('{i}')"
        exec(line)
        line = f"for_all_vars_z3.append({i})"
        exec(line)
    
    print("ForAll Quantified Variables:", for_all_vars)

    s = SolverFor("NRA") ### Warning: Do not change the name of this variable

    all_conditions = True
    lst = []
    for index in range(len(condition_pairs)):
        pre, post, real_vars = condition_pairs[index]
        pre_z3 = list(map(lambda x: x.as_expr() >= 0, pre))
        post_z3 =list(map(lambda x: x.as_expr() >= 0, post))
        line = f"pre_cond = And({pre_z3})"
        exec(line)
        line = f"post_cond = And({post_z3})"
        exec(line)
        exec(f"lst.append(z3.Implies(pre_cond, post_cond))")
    
    prog = And(lst)
    main_cond = ForAll(for_all_vars_z3, prog)
    print("Final Main Condition: ", main_cond)

    s.add(main_cond)
    res = s.check()
    if str(res) == "sat":
        print(s.model())
    else:
        print("Unsat") 

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
    write_symbolic_program(symbolic_polynomial_program, file_name + ".symbolic")
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
    solve_directly_with_z3(condition_pairs)
    end =time.time()
    with open(log_file, "a+") as log:
        log.write("Direct with Z3 with Heuristics Solving Time: %.8fs\n"%((end-start)))

    return graph


if __name__ == '__main__':
    real_vars = function_vars = None
    file_name=sys.argv[1]
    src = open(sys.argv[1]).read()
    graph_main(src, file_name)
