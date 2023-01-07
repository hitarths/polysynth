from z3 import *
for_all_vars_z3 = []

n = Int('n')
for_all_vars_z3.append(n)
r = Int('r')
for_all_vars_z3.append(r)
p = Int('p')
for_all_vars_z3.append(p)
q = Int('q')
for_all_vars_z3.append(q)
n_ = Int('n_')
for_all_vars_z3.append(n_)
r_ = Int('r_')
for_all_vars_z3.append(r_)
p_ = Int('p_')
for_all_vars_z3.append(p_)
q_ = Int('q_')
for_all_vars_z3.append(q_)
s = SolverFor("NRA")

l = Int("l")
cond1 = Exists(l, And(l >= 0, q == 4**(l)))
k = Int("k")
cond2 = Exists(k, And(k >= 0, q == 4**(k)))
lst = []


pre_cond = And([q <= n, n >= 0, Exists(k, And(q == 4**k)), q_ == 4])
post_cond = And([Exists(k, And( q_ == 4**k))])
lst.append(Implies(pre_cond, post_cond))


# pre_cond = And([q > n, n >= 0, p == 0, r ==n, Exists(k, And(k>=0, q == 4**k))])
# post_cond = And([Exists(l, And(l>=0, q == 4**l)),r >=0, r < 2*p + q, p**2 + r*q == n*q])
# lst.append(z3.Implies(pre_cond, post_cond))


prog = And(lst)
main_cond = ForAll(for_all_vars_z3, prog)
s.add(main_cond)
res = s.check()

if str(res) == "sat":
    print(s.model())
else:
    print("Unsat")


