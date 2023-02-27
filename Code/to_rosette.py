from re import TEMPLATE
import lark
import sys
import random
import sympy as sp
import queue, copy
from sympy.matrices import Matrix
from parser import get_parser
from polynomial import Polynomial
from z3 import *
import time, math
from PolynomialTS import PolynomialTS, graph_preprocessor
from parser_utils import write_symbolic_program
import os
import time, datetime
import pdb

random.seed(0)

TEMPLATE="""#lang rosette
(require rosette/lib/synthax)
{definesymbols}
(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list {for_all_vars_rosette})
   #:guarantee (and {asserts})
   )
  )
(define end (current-inexact-milliseconds))
(print (- end start))
"""

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

def all_vars_in_list_of_poly(lst):
    variables = set()
    for f in lst:
        for mono in f.monomial_dict:
            if type(mono) == int:
                continue
            variables = variables.union(mono.free_symbols)
    return {str(x): x for x in variables} # return the dictionary of variable name: sympy variable


def pow_to_mul(expr):
    """
    Convert integer powers in an expression to Muls, like a**2 => a*a.
    """
    pows = list(expr.atoms(sp.Pow))
    repl = zip(pows, [sp.Mul(*[b]*e,evaluate=False) for b,e in (i.as_base_exp() for i in pows)])
    dic = {a[0]: a[1] for a in repl}
    return expr.subs(dic)


def to_postfix(expr):
    try:
        if expr.is_Add:
            return "(+ {})".format(" ".join([to_postfix(e) for e in expr.args]))
        elif expr.is_Mul:
            return "(* {})".format(" ".join([to_postfix(e) for e in expr.args]))
        else:
            return str(expr)
    except:
        print("Warning: Returning the expression as it is: " + str(expr))
        return str(expr)

def print_mat(mat):
    for i in mat:
        print(i)


def create_rosette_lst(lst):
    return "(list " + " ".join(lst) + ")"

def read_rosette_lst(lst):
    readlst = []
    for i in range(len(lst)):
        readlst.append("(define {} (list-ref lst {}))".format(lst[i], i))
    return readlst

def to_rosette(condition_pairs, file_name, target):
    definesymbolic = []
    print("Converting to Rosette...")
    for i in all_unknown_coefficients:
        # line = f"{i} = Real('{i}')"
        line = f"(define-symbolic {i} real?)"
        definesymbolic.append(line)


    for_all_vars = set()

    for index in range(len(condition_pairs)):
        pre, post, real_vars = condition_pairs[index]
        all_vars = all_vars_in_list_of_poly(pre + post)
        for v in all_vars:
            var = all_vars[v]
            if var not in all_unknown_coefficients and var not in for_all_vars:
                for_all_vars.add(var)
                line = f"(define-symbolic {str(var)} real?)"
                definesymbolic.append(line)
                
    
    definesymbolic_string = "\n".join(definesymbolic)
    for_all_vars = list(for_all_vars)
    for_all_vars_rosette = " ".join((map(lambda x: str(x), for_all_vars)))
    # for i in for_all_vars:
    #     line = f"{i} = Real('{i}')"
    #     exec(line)
    #     line = f"for_all_vars_z3.append({i})"
    #     exec(line)
    
    print("ForAll Quantified Variables:", for_all_vars)

    # s = SolverFor("NRA") ### Warning: Do not change the name of this variable
    all_conditions = True
    lst = []
    rosette_assert = []
    for index in range(len(condition_pairs)):
        pre, post, real_vars = condition_pairs[index]
        pre_ros ="(and {})".format(" ".join(list(map(lambda x: "(>= {} 0)".format(to_postfix(x.as_expr())), pre))))
        post_ros ="(and {})".format(" ".join(list(map(lambda x: "(>= {} 0)".format(to_postfix(x.as_expr())), post))))
        rosette_assert.append("(implies {} {})".format(pre_ros, post_ros))
    
    all_asserts = "\n".join(rosette_assert)

    template = TEMPLATE.format(definesymbols = definesymbolic_string, 
                        for_all_vars_rosette = for_all_vars_rosette, 
                        asserts = all_asserts)

                 
    with open(target, "w") as f:
        f.write(template)




def graph_main(src, file_name, target):
    global all_unknown_coefficients, unknown_coefficients_index
    tree = program_to_tree(src)
    graph, symbolic_polynomial_program, all_unknown_coefficients = graph_preprocessor(tree, file_name)
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

    start = time.time()
    to_rosette(condition_pairs, file_name, target)
    end =time.time()



if __name__ == '__main__':
    real_vars = function_vars = None
    file_name=sys.argv[1]
    src = open(sys.argv[1]).read()
    target= sys.argv[2]
    graph_main(src, file_name, target)
