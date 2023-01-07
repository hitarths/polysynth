real fl,m,l,b,h,rho,e,x;
function f = (([(m), 1])*([(fl),1]));
@pre(((x>=0) and (m>=0)));
l = 10;
b = 5;
h = 2;
rho = 2;
if (m <= ((((rho*l)*b)*h)))
{
    fl = 1;
    x = f;
    e = (m - (rho*(l*(b*(h*x)))));
}
else
{
    e = 0;
    fl = 0;
    x= f;
}
@post(((((e>=0) and (e<=0)) and (x>= 0)) and (x <=1)));