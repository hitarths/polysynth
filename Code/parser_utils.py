import sys, random, queue, copy, time, math
import sympy as sp
from sympy.matrices import Matrix
from parser import get_parser
from polynomial import Polynomial

sp_unit = 1
random.seed(0)
all_unknown_coefficients = []
unknown_coefficients_index = 0

def get_vars_name(_variables):
    """
    Given a "_variables", the function recursively finds the variables and returns the list of variables
    """
    lst = []
    if _variables.data == "vars":
        for child in _variables.children:
            lst.extend(get_vars_name(child))
    if _variables.data == "var":
        lst.append(str(_variables.children[0]))
    return lst


def get_symbolic_poly(symbolic_poly, real_vars):
    global all_unknown_coefficients, unknown_coefficients_index
    if len(symbolic_poly.children) == 2:
        variables = get_vars_name(symbolic_poly.children[0])
        degree = int(symbolic_poly.children[1].children[0].value)
    else:
        variables = []
        degree = int(symbolic_poly.children[0].children[0].value)


    # check all variables are in real_vars
    sympy_vars = []
    for var in variables:
        if var not in real_vars:
            raise Exception("Undefined variable used in symbolic_poly:"+ str(symbolic_poly))
        sympy_vars.append(real_vars[var])

    # sympy_vars = list(map(lambda x: real_vars[x], variables))
    curr_monomial_list = [sp_unit]
    all_monomials = set([sp_unit])
    # sympy_vars = list(map(lambda x: real_vars[x], variables))
    curr_degree = 1
    while curr_degree <= degree:
        new_monomial_list = list()
        for var in sympy_vars:
            for monomial in curr_monomial_list:
                new_monomial_list.append(monomial*var)
        all_monomials = all_monomials.union(set(new_monomial_list))
        curr_monomial_list = new_monomial_list
        curr_degree += 1

    monomial_vector = list(all_monomials)
    monomial_dict = {}
    coefficient_list = []
    # create the monomial_dict for the Polynomial
    for mono in monomial_vector:
        unknown_coefficient_name = "_a_" + str(unknown_coefficients_index) + "_"
        sym = sp.Symbol(unknown_coefficient_name)
        unknown_coefficients_index +=1
        coefficient_list.append(sym)
        monomial_dict[mono] = sym

    all_unknown_coefficients.extend(coefficient_list)
    polynomial = Polynomial(monomial_dict)
    return polynomial, polynomial.to_string()


def get_monomial(monomial, real_vars):
    s = sp_unit
    child = monomial
    if child.data == "dot":
        m1, l1 = get_monomial(child.children[0], real_vars)
        m2, l2 = get_monomial(child.children[1], real_vars)
        return m1*m2, "({}.{})".format(l1, l2)
    elif child.data == "monomial":
        return get_monomial(child.children[0], real_vars)
    elif child.data == "var":
        var_name = str(child.children[0])
        if var_name in real_vars:
            return Polynomial({real_vars[var_name]:1}), var_name
        elif var_name in function_vars:
            return function_vars[var_name]
        else:
            raise Exception("Undefined variable used in monomial:"+ str(monomial))
    elif child.data == "num":
        return Polynomial({sp_unit: float(child.children[0].value)}), child.children[0].value
    elif child.data == "neg":
        return Polynomial({sp_unit: -float(child.children[0].value)}), "-" + str(child.children[0].value)
    else:
        raise Exception("Unhandled case for monomial child: " + str(child.data))

def apply_substitute(lst, substitute_dict):
    return list(map(lambda x: x.subs(substitute_dict), lst))


def get_expr(expr, real_vars,):
    """
    Returns sympy for the given expression
    """
    binary_ops = {"add": (lambda x,y: x+y, "+"),
            "sub": (lambda x,y: x-y, "-"),
            "mul": (lambda x,y: x*y, "*"),
            "div_num": (lambda x,y: x/y, "/"),
            }
    child = expr
    if child.data in binary_ops:
        op, op_str = binary_ops[child.data]
        if op == "div_num":
            print("div_num", child.children[0], child.children[1])
        expr1, line1 = get_expr(child.children[0], real_vars)
        expr2, line2 = get_expr(child.children[1], real_vars)
        return op(expr1, expr2), "({} {} {})".format(line1, op_str, line2)
    elif child.data == "monomial":
        return get_monomial(child, real_vars)
    elif child.data == "symbolic_poly":
        return get_symbolic_poly(child, real_vars)
    elif child.data == "expr":
        return get_expr(child.children[0], real_vars)
    elif child.data == "num":
        return Polynomial({sp_unit : float(child.children[0].value)}), (child.children[0].value)
    else:
        raise Exception("Unhandled case for expr child: " + str(child.data))

def get_assertion(assertion, real_vars):
    """
        Returns the assertion by using the new variables with given index
    """
    lst = []
    if (assertion.data == "greaterequal"):
        expr_lhs, line_assertion_lhs = get_expr(assertion.children[0], real_vars)
        expr_rhs, line_assertion_rhs = get_expr(assertion.children[1], real_vars)
        line = "{} >= {}".format(line_assertion_lhs, line_assertion_rhs)
        expression = expr_lhs - expr_rhs
        lst.append(expression)
    elif (assertion.data == "lesserequal"):
        expr_lhs, line_assertion_lhs = get_expr(assertion.children[0], real_vars)
        expr_rhs, line_assertion_rhs = get_expr(assertion.children[1], real_vars)
        line = "{} <= {}".format(line_assertion_lhs, line_assertion_rhs)
        expression = expr_rhs - expr_lhs  ## note the order is reversed
        lst.append(expression)
        
    elif (assertion.data == "assert_equal"):
        expr_lhs, line_assertion_lhs = get_expr(assertion.children[0], real_vars)
        expr_rhs, line_assertion_rhs = get_expr(assertion.children[1], real_vars)
        line = "{} == {}".format(line_assertion_lhs, line_assertion_rhs)
        expression1 = expr_rhs - expr_lhs 
        expression2 = expr_lhs - expr_rhs  
        lst.extend([expression1, expression2])

    elif (assertion.data == "and"):
        assertion1, line1 = get_assertion(assertion.children[0],real_vars)
        assertion2, line2 = get_assertion(assertion.children[1],real_vars)
        lst.extend(assertion1 + assertion2)
        line = "({} {} {})".format(line1, "and", line2)
    # elif (assertion.data == "or"):
    #     return sp.logic.Or(get_assertion(assertion.children[0], real_vars, substitute_dict), 
    #             get_assertion(assertion.children[1]), real_vars, substitute_dict)
    # elif (assertion.data == "not"):
    #     return sp.logic.Not(get_assertion(assertion.children[0]), real_vars, substitute_dict)
    elif (assertion.data == "precond" or assertion.data == "assertion"):
        return (get_assertion(assertion.children[0], real_vars))

    else:
        raise Exception("Unknown assertion: "+ str(assertion.data))
    return lst, line


def add_statement(statement, real_vars, current_condition_pair, condition_pairs, symbolic_polynomial_program):
    line = ""
    global variables_index
    substitute_dict = get_substition_dict(real_vars, variables_index)
    if (statement.data == "stmt" or statement.data == "assignment" or statement.data == "simplestatement"):
        return add_statement(statement.children[0], real_vars,  current_condition_pair, condition_pairs, symbolic_polynomial_program)
    elif (statement.data == "equality" or statement.data == "equalitystmt"):
        # print("::", statement)
        var_name = get_vars_name(statement.children[0])[0]
        rhs_tree = statement.children[1]
        rhs, rhs_line = get_expr(rhs_tree, real_vars)
        rhs = rhs.subs(substitute_dict)
        variables_index[var_name] = variables_index[var_name] + 1  # increase the counter because the variable is updated
        substitute_dict = get_substition_dict(real_vars, variables_index)
        lhs = Polynomial({real_vars[var_name].subs(substitute_dict): 1})
        # print("Index Dict: ", variables_index)
        # print("Reals: ", real_vars)
        current_condition_pair[0].extend([lhs - rhs, rhs - lhs])
        # print([lhs - rhs, rhs - lhs])
        symbolic_polynomial_program.append("{} = {};".format(var_name, rhs_line))

    elif (statement.data == "while"):
        while_stmts = statement.children[2:]
        invariant_tree = statement.children[1]
        guard_tree = statement.children[0]
        substitute_dict = get_substition_dict(real_vars, variables_index)

        # we need to close the last condition pair by implying the invariant
        invariant, invariant_line = get_assertion(invariant_tree, real_vars)
        guard, guard_line = get_assertion(guard_tree, real_vars)
        current_condition_pair[1].extend(apply_substitute(invariant, substitute_dict))

        # create a new condition pair
        current_condition_pair = [[],[]]
        condition_pairs.append(current_condition_pair)

        # we will increment the variable index by 1 for each variable to start a "new life"
        temp_variables_index = {x: variables_index[x]+1 for x in variables_index}
        variables_index = temp_variables_index
        substitute_dict = get_substition_dict(real_vars, variables_index)
        # print("Inv:" , invariant)
        new_invariant = apply_substitute(invariant, substitute_dict)
        # print("New Inv:", new_invariant)
        current_condition_pair[0].extend(new_invariant)
        # add line for list
        symbolic_polynomial_program.append("while ({}, {}) {{".format(guard_line, invariant_line))
        for stmt in while_stmts:
            stmt_line = add_statement(stmt, real_vars,  current_condition_pair, condition_pairs, symbolic_polynomial_program)

        # add the guard in the pre of current condition pair but in the new variables
        substitute_dict = get_substition_dict(real_vars, variables_index)
        new_guard = apply_substitute(guard, substitute_dict)
        current_condition_pair[0].extend(new_guard)
        # get the invariant as the post condition
        last_invariant = apply_substitute(invariant, substitute_dict)
        current_condition_pair[1].extend(last_invariant)

        current_condition_pair = [[],[]]
        condition_pairs.append(current_condition_pair)

        # we will increment the variable index by 1 for each variable to start another "new life"
        temp_variables_index = {x: variables_index[x]+1 for x in variables_index}
        variables_index = temp_variables_index
        substitute_dict = get_substition_dict(real_vars, variables_index)
        final_invariant = apply_substitute(invariant,substitute_dict)
        current_condition_pair[0].extend(final_invariant)

        # add the negation of the guard in the new variables
        new_guard = apply_substitute(guard, substitute_dict)
        neg_guard = list(map(lambda x: x*Polynomial({sp_unit: -1}), new_guard)) # - Polynomial({sp_unit: 1})  #### Todo: Assuming integerssss                   ##### TODO: make this strict inequality
        current_condition_pair[0].extend(neg_guard)
        
        symbolic_polynomial_program.append("}")
    else:
        raise Exception("Unhandled case for statement: " + str(statement.data))




def get_declarations(declarations, symbolic_polynomial_program = []):
    """
    Return the variables which are declared
    """
    function_vars = {}
    real_vars = {}
    for child in declarations.children:
        line = ""
        if child.data == "reals_declaration":
            _vars = get_vars_name(child.children[0])
            line = "real {};".format(",".join(_vars))
            real_vars.update({x: sp.Symbol(x) for x in _vars})
        if child.data == "function_declaration":
            f_name = get_vars_name(child.children[0])[0]
            function_vars[f_name], expr_line = get_expr(child.children[1], real_vars)
            line = "function {} = {};".format(f_name, expr_line)
        symbolic_polynomial_program.append(line)
    return (real_vars, function_vars)


def preprocessor(tree):
    """
    The function takes a program tree as input and returns the symbolic
    """
    global real_vars, function_vars, precondition,condition_pairs, variables_index
    declarations = tree.children[0]
    precond = tree.children[1]
    stmts = tree.children[2]
    postcond = tree.children[3].children[0]
    symbolic_polynomial_program = []  # to store each line of the symbolic polynomial program

    # get variable list
    real_vars, function_vars = get_declarations(declarations, symbolic_polynomial_program)

    # print(real_vars, "\n", function_vars)

    variables_index = {x: 0 for x in real_vars}
    condition_pairs = []
    current_condition_pair = [[],[]]  # we only store the lhs of the inequalities in both the lists, rhs is >=0 by default
    condition_pairs.append(current_condition_pair)
    # Handle Precondition
    substitute_dict =  get_substition_dict(real_vars, variables_index)
    if len(precond.children)== 0:
        _preconditions, precondition_line = [Polynomial({sp_unit:1})], ""
    else:
        _preconditions, precondition_line = get_assertion(precond, real_vars) # it is a list, we only store the lhs of the inequalities, rhs is >= 0 by default
    symbolic_polynomial_program.append("@pre({});".format(precondition_line))
    preconditions = apply_substitute(_preconditions, substitute_dict)
    current_condition_pair[0].extend(preconditions)

    # Handle Statements
    for statement in stmts.children:
        add_statement(statement, real_vars, current_condition_pair, condition_pairs, symbolic_polynomial_program)
        current_condition_pair = condition_pairs[-1]
    # Handle Postcondition
    substitute_dict =  get_substition_dict(real_vars, variables_index)
    _postconditions, postconditions_line = get_assertion(postcond, real_vars)
    postconditions = apply_substitute(_postconditions, substitute_dict)
    condition_pairs[-1][1].extend(postconditions)
    symbolic_polynomial_program.append("@post({});".format(postconditions_line))
    # we will add a compact polynomial inequality when we apply stellensatze
    write_symbolic_program(symbolic_polynomial_program)
    return condition_pairs

def write_symbolic_program(symbolic_polynomial_program, out_file_name):
    f = open(out_file_name, "w")
    prog = "\n".join(symbolic_polynomial_program)
    f.write(prog + "\n")
    f.flush()
    f.close()


def get_bound_poly(real_vars, bound):
    sp_bound = Polynomial({sp_unit: bound})
    monomial_dict = {}
    count = 0
    for x in real_vars:
        var = real_vars[x]
        monomial_dict[var*var] = 1
        count += 1
    poly = Polynomial(monomial_dict)
    p_count = Polynomial({sp_unit:count})

    return (sp_bound*sp_bound*p_count - poly)

def get_substition_dict(real_vars, variables_index):
    substitute_dict = {}
    for var in variables_index:
        var_name = var + "_" + str(variables_index[var])
        if var_name not in real_vars:
            real_vars[var_name] = sp.Symbol(var_name)
        substitute_dict[var] = real_vars[var_name]
    return substitute_dict
