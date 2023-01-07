import os, sys, random, lark, queue, copy, datetime, pdb, argparse, time, math
import sympy as sp
from polynomial import Polynomial
from sympy.matrices import Matrix
from parser import get_parser

import pdb

all_unknown_coefficients = []
unknown_coefficients_index = 0


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
            function_vars[f_name] = get_expr(child.children[1], real_vars)
            expr_line = function_vars[f_name][1]
            line = "function {} = {};".format(f_name, expr_line)
        symbolic_polynomial_program.append(line)
    return (real_vars, function_vars)

sp_unit = 1
random.seed(0)


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
    return list(map(lambda x: x.subs_complex(substitute_dict), lst))


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
            function_vars[f_name] = get_expr(child.children[1], real_vars)
            expr_line = function_vars[f_name][1]
            line = "function {} = {};".format(f_name, expr_line)
        symbolic_polynomial_program.append(line)
    return (real_vars, function_vars)

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


def add_statement_for_graph(graph, parent_vertex, statement, symbolic_polynomial_program):
    """
    Returns: The vertex at which the statement ends in the graph
    """
    line = ""
    if (statement.data == "stmt" or statement.data == "assignment" or statement.data == "simplestatement"):
        return add_statement_for_graph(graph, parent_vertex, statement.children[0], symbolic_polynomial_program)
    
    elif (statement.data == "equality" or statement.data == "equalitystmt"):
        # print("::", statement)
        var_name = get_vars_name(statement.children[0])[0]
        rhs_tree = statement.children[1]
        rhs, rhs_line = get_expr(rhs_tree, real_vars)
        text = "{} = {}".format(var_name, rhs_line)
        new_vertex = graph.add_vertex()
        update = (var_name, rhs)
        graph.add_edge(parent_vertex, new_vertex, update, [], text) # guard is empty list
        symbolic_polynomial_program.append("{} = {};".format(var_name, rhs_line))
        return new_vertex

    elif (statement.data == "while"):
        while_stmts = statement.children[2:]
        invariant_tree = statement.children[1]
        guard_tree = statement.children[0]
        # we need to close the last condition pair by implying the invariant
        invariant, invariant_line = get_assertion(invariant_tree, real_vars)
        guard, guard_line = get_assertion(guard_tree, real_vars)
        # create a new vertex as while node and an empty edge to it
        while_node = graph.add_vertex(text = invariant_line)
        graph.add_edge(parent_vertex, while_node, [], [])
        graph.add_cutset(while_node, invariant)
        guard_node = graph.add_vertex()
        # move to guard node if the guard is satisfied
        graph.add_edge(while_node, guard_node, [], guard, guard_line)
        parent_vertex = guard_node

        symbolic_polynomial_program.append("while ({}, {}) {{".format(guard_line, invariant_line))
        for stmt in while_stmts:
            parent_vertex = add_statement_for_graph(graph, parent_vertex, stmt, symbolic_polynomial_program)

        # now we need to loop back to the while node from the last parent vertex to complete the cycle
        graph.add_edge(parent_vertex, while_node, [], [])

        # to exit the while loop, the negation of guard must be true, so we add another vertex

        final_node = graph.add_vertex()
        neg_guard =  get_negation(guard)                   ##### TODO: make this strict inequality
        graph.add_edge(while_node, final_node, [], neg_guard, "Not({})".format(guard_line))
        symbolic_polynomial_program.append("}")
        return final_node

    elif (statement.data == "ndif"):
        ndif_node = graph.add_vertex()
        ndif_end_node = graph.add_vertex()
        graph.add_edge(parent_vertex, ndif_node, [], [])
        symbolic_polynomial_program.append("ndif {")
        for ndifblock in statement.children:
            assert(ndifblock.data == "ndifblock")
            assume_assertion, assume_assertion_line = get_assertion(ndifblock.children[0], real_vars)
            symbolic_polynomial_program.append("[assume ({}) {{".format(assume_assertion_line))
            if_block = ndifblock.children[1]
            else_block = None
            # there is a parent vertex, which is the root
            ndifblock_vertex = graph.add_vertex(text = "ndifblock")
            graph.add_edge(ndif_node, ndifblock_vertex,[], assume_assertion, assume_assertion_line)

            curr_vertex = ndifblock_vertex
            for stmt in if_block.children:
                curr_vertex = add_statement_for_graph(graph, curr_vertex, stmt, symbolic_polynomial_program)
            graph.add_edge(curr_vertex, ndif_end_node, [], [], "")
        # pdb.set_trace()
        return ndif_end_node

    elif (statement.data == "if"):
        if_cond, if_line = get_assertion(statement.children[0], real_vars)
        symbolic_polynomial_program.append("if ({}) {{".format(if_line))
        if_block = statement.children[1]
        else_block = None
        if len(statement.children) == 3:
            # there is an else block
            else_block = statement.children[2]

        # there is a parent vertex, which is the root
        if_vertex = graph.add_vertex(text = "If")
        graph.add_edge(parent_vertex, if_vertex, [], [])

        if_positive = graph.add_vertex()
        graph.add_edge(if_vertex, if_positive, [], if_cond, if_line)

        curr_vertex = if_positive
        for stmt in if_block.children:
            curr_vertex = add_statement_for_graph(graph, curr_vertex, stmt, symbolic_polynomial_program)
        
        if_positive_end = curr_vertex
        symbolic_polynomial_program.append("}")
        else_positive = graph.add_vertex()
        else_cond = get_negation(if_cond)
        graph.add_edge(if_vertex, else_positive, [], else_cond, "Not ({})".format(if_line))

        if else_block:
            symbolic_polynomial_program.append("else {")
            curr_vertex = else_positive
            for stmt in else_block.children:
                curr_vertex = add_statement_for_graph(graph, curr_vertex, stmt, symbolic_polynomial_program)
            else_positive_end = curr_vertex
            symbolic_polynomial_program.append("}")
        else:
            else_positive_end = else_positive

        final_node = graph.add_vertex()
        graph.add_edge(if_positive_end, final_node, [], [])
        graph.add_edge(else_positive_end, final_node, [], [])
        return final_node

    else:
        raise Exception("Unhandled case for statement: " + str(statement.data))


def get_negation(lst_poly_geq):
    # we overapproximate negation
    return list(map(lambda x: x*Polynomial({sp_unit: -1}), lst_poly_geq))

def graph_preprocessor(tree, file_name):
    """
    The function takes a program tree as input and returns the symbolic
    """
    global real_vars, function_vars
    declarations = tree.children[0]
    precond = tree.children[1]
    stmts = tree.children[2]
    postcond = tree.children[3].children[0]
    symbolic_polynomial_program = []  # to store each line of the symbolic polynomial program

    # get variable list
    real_vars, function_vars = get_declarations(declarations, symbolic_polynomial_program)
    variables_index = {x: 0 for x in real_vars}

    if len(precond.children)== 0:
        _preconditions, precondition_line = [Polynomial({sp_unit:1})], ""
    else:
        _preconditions, precondition_line = get_assertion(precond, real_vars) # it is a list, we only store the lhs of the inequalities, rhs is >= 0 by default
    symbolic_polynomial_program.append("@pre({});".format(precondition_line))

    graph = PolynomialTS(real_vars, file_name)
    root = graph.add_vertex(text = precondition_line)
    graph.set_initial_loc(root, _preconditions)
    # Handle Statements
    parent_vertex = root
    for statement in stmts.children:
        parent_vertex = add_statement_for_graph(graph, parent_vertex, statement, symbolic_polynomial_program)
    # Handle Postcondition
    _postconditions, postconditions_line = get_assertion(postcond, real_vars)

    terminal = graph.add_vertex(text = postconditions_line)
    graph.add_edge(parent_vertex, terminal, [], [])
    graph.set_final_loc(terminal, _postconditions)
    symbolic_polynomial_program.append("@post({});".format(postconditions_line))
    # we will add a compact polynomial inequality when we apply stellensatze (if required)
    return graph, symbolic_polynomial_program, all_unknown_coefficients


class PolynomialTS:
    def __init__(self, variables_dict, file_name):
        self.variables = variables_dict # maps each variable name type(str) to the sp_symbol
        self.vertices = set()
        self.vertex_text = dict()
        self.edges = dict()
        self.cutset = set() # list v's such that every cycle passses through at least one v from cutset
        self.invariants = dict() # v -> list of P(V) such that P(V) \geq 0 whenever control reaches v
        self.counter = 0
        self.file_name = file_name

    def add_vertex(self, text = ""):
        v = self.counter
        self.counter += 1
        self.vertices.add(v)
        self.vertex_text[v] = text
        return v

    def add_edge(self,v1, v2, update, guard, text = ""):
        # update = (var, P(V)) for var = P(V) (P(V) is Polynomial type) or None if no update
        # guard  = P(V) which stands for P(V) \geq 0
        if len(update) != 2 and len(update) !=0:
            raise Exception("Invalid update provided: ", update, len(update))
        if v1 not in self.vertices or v2 not in self.vertices:
            raise Exception("Invalid vertex provided for edge: {} - {}".format(v1, v2))
        if (v1,v2) in self.edges:
            raise Exception("Edge already exists")
        self.edges[(v1,v2)] = (update, guard, text)


    def add_cutset(self, v, invariant):
        if v not in self.vertices:
            raise Exception("Vertex {} does not exists.".format(v))
        self.cutset.add(v)
        self.invariants[v] = invariant

    def set_initial_loc(self, v, invariant):
        if v not in self.vertices:
            raise Exception("Vertex {} does not exists.".format(v))
        self.initial_loc = v
        self.invariants[v] = invariant

    def set_final_loc(self, v, invariant):
        if v not in self.vertices:
            raise Exception("Vertex {} does not exists.".format(v))
        self.final_loc = v
        self.invariants[v] = invariant

    def print(self):
        print("Initial Location: ", self.initial_loc)
        print("Final Location: ", self.final_loc)
        print("Vertices:")
        for v in self.vertices:
            if v in self.invariants:
                print(v," --- Invariant: ", self.invariants[v])
            else:
                print(v)

        print("Edges: ")
        for e in self.edges:
            print(e, self.edges[e])

    def plot(self):
        import networkx as nx
        import matplotlib.pyplot as plt
        edges = self.edges.keys()
        G = nx.Graph()
        for v in self.vertices:
            G.add_node(v, name=self.vertex_text[v])
        for edge in edges:
            G.add_edge(edge[0], edge[1], text = self.edges[edge][2])
        pos = nx.spring_layout(G)
        plt.figure()
        nx.draw(
            G, pos, edge_color='black', width=1, linewidths=2,
            node_size=500, node_color='pink', alpha=0.9,
            labels={node: node for node in G.nodes()}
        )
        edge_labels = dict()
        for edge in self.edges:
            edge_labels[edge] = self.edges[edge][2][:10] # the text
        nx.draw_networkx_edge_labels(
            G, pos,
            edge_labels=edge_labels,
            font_color='red',
            font_size='8'
        )
        # get positions
        pos = nx.spring_layout(G)
        # shift position a little bit
        shift = [0, 0]
        shifted_pos ={node: node_pos + shift for node, node_pos in pos.items()}
        # Just some text to print in addition to node ids
        labels = {}
        for v in self.vertex_text:
            labels[v] = self.vertex_text[v]

        nx.draw_networkx_labels(G, shifted_pos, labels=labels, horizontalalignment="left", font_size='8')

        plt.axis('off')
        plt.savefig(self.file_name + "_graph.svg", dpi=10000)
        nx.write_graphml(G, self.file_name + "_graph.graphml", named_key_ids=True, edge_id_from_attribute="text")



    def get_constraint_pairs(self):
        CP = []
        for v in self.cutset:
            CP.extend(self.get_constraint_pairs_for_paths_between(self.initial_loc, v))
            CP.extend(self.get_constraint_pairs_for_paths_between(v, self.final_loc))

        for v1 in self.cutset:
            for v2 in self.cutset:
                CP.extend(self.get_constraint_pairs_for_paths_between(v1, v2))

        # search for path directly from initial to final location
        CP.extend(self.get_constraint_pairs_for_paths_between(self.initial_loc, self.final_loc))


        return CP

    def get_constraint_pairs_for_paths_between(self, v1, v2):
        """
        Returns: A list of constraint pairs for each path between v1 and v2
        """
        lst = []
        paths = self.get_paths_between(v1, v2)
        for path in paths:
            print("Path: ", path)
            variables_index = {x: 0 for x in self.variables}
            alpha, beta, real_vars = [],[], copy.copy(self.variables)
            substitute_dict = get_substition_dict(real_vars, variables_index)
            final_values_of_vars = {x: Polynomial({substitute_dict[x]:1}) for x in self.variables}
            alpha += apply_substitute(self.invariants[v1], final_values_of_vars)
            old_vertex = v1

            for vert in path[1:]:
                new_vertex = vert
                update, guard, text = self.edges[(old_vertex, new_vertex)]
                guard_subs = apply_substitute(guard, final_values_of_vars)
                print("guard--",text,guard_subs)
                alpha.extend(guard_subs)
                if update:
                    (var, poly) = update
                    poly_subs = poly.subs_complex(final_values_of_vars)
                    print(update)

                    final_values_of_vars[str(var)] = poly_subs
                    print("fv",final_values_of_vars)
                    print("----")
                    # variables_index[var] += 1 # increment the index of the variable by 1
                    # substitute_dict = get_substition_dict(real_vars, variables_index) # get the new substitution dict
                    # var_poly =  Polynomial({real_vars[var].subs(substitute_dict): 1})
                    # assignment_inequalities = [var_poly - poly_subs, poly_subs - var_poly] # this will set var_poly = poly_subs
                    # alpha.extend(assignment_inequalities)
                old_vertex = new_vertex
            beta += apply_substitute(self.invariants[v2], final_values_of_vars)
            lst.append((alpha,beta, real_vars))
        return lst


    def get_paths_between(self,v1,v2, visited = None):
        # assume no self loop, i.e., every while block has at least one statement
        if visited == None:
            visited = {x: False for x in self.vertices}
        paths = []
        if v1 == v2 and visited[v1]:
            return []

        visited[v1] = True
        for _v in self.get_neighbors(v1):
            # sub_paths = []
            # print("Look: ", _v, " For: ", v1)
            if _v == v2:
                paths.extend([[v1,v2]])
            elif (_v in self.cutset):
                continue
            else:
                sub_paths = self.get_paths_between(_v, v2, visited)
                paths.extend([[v1] + sub_path for sub_path in sub_paths])
                
        return paths

    def get_neighbors(self, v):
        n = []
        for _v in self.vertices:
            if (v, _v) in self.edges:
                n.append(_v)
        return n


