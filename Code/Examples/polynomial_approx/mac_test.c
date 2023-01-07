real t,x,e, g1,g2,n;
function f2 = ((x*x) + x);
function f1 = (((x*x)));
function f3 = [(x),2];
@pre(1>=0);
t = 0;
e = 5;
if (x<=t)
{ 
   g1 = (f3 - f1);
   n = g1;
}
else
{
    g2 = (f3 - f2);
    n = g2;
}
@post(((n<=e) and (n>=(-1*e))));
