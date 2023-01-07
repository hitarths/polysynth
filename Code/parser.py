import lark

# A language based on a Lark example from:
# https://github.com/lark-parser/lark/wiki/Examples
GRAMMAR = """
start: declaration_list precond stmt_list postcond

// Defining declaration Nonterminal
declaration_list: declaration+
declaration: "real " vars ";"     -> reals_declaration             //declaration of integer
    | "function" var "=" expr ";"   -> function_declaration         //declaration of function symbol
// Defining precondition Nonterminal
precond: "@pre" "(" assertion? ")" ";"             //pre condition
assertion: expr ">=" expr                   -> greaterequal
        |  expr "<=" expr                   -> lesserequal
        |  expr "==" expr                   -> assert_equal
        | "(" assertion "and" assertion ")" -> and
        | "(" assertion "or" assertion ")"  -> or
        | "(" "not" assertion ")"           -> not
        | "(" assertion ")"                 -> assertion

stmt_list: stmt*
stmt: equalitystmt                                      -> assignment
    | "while" "(" assertion "," assertion ")" "{" stmt+ "}"        -> while
    | "if" "(" assertion ")" "{" ifblock "}" elseblock?   -> if
    | "if" "(" assertion ")" "{" ifblock "}" elifblock+   -> ifelif
    | "ndif" "{" ndifblock+ "}"   -> ndif

ifblock: stmt*  -> ifblock
elseblock: "else" "{" stmt* "}" -> else
elifblock: "elif" "(" assertion ")" "{" stmt* "}" -> elif
ndifblock: "[assume" "(" assertion ")" "]" "{" ifblock "}" -> ndifblock
                                            

postcond: "@post" "(" assertion ")" ";"           //post condition

equalitystmt : var "=" expr ";"  -> equality

// Defining expression Nonterminal 
expr:  "(" expr "+" expr ")"        -> add
    |  "(" expr "-" expr ")"        -> sub                    
    |  "(" expr "*" expr ")"        -> mul
    |  "(" expr "/" num ")"         -> div_num                            
    |  monomial                     -> monomial
    |  "(" expr ")"
    | "(" monomial ")"              -> monomial
    | "[" "(" vars? ")" "," num "]"                   -> symbolic_poly

monomial: monomial "." monomial     -> dot
    | var 
    | num


vars: var
    | vars "," vars

var: /[a-zA-Z][a-zA-Z0-9_]*/
num: NUMBER
    | "-" NUMBER -> neg

COMMENT: /\/\/.*/
%import common.NUMBER
%import common.WORD
%import common.WS
%import common.CNAME
%ignore WS
%ignore COMMENT
""".strip()

def get_parser():
    parser = lark.Lark(GRAMMAR, propagate_positions=True, parser='lalr')
    return parser