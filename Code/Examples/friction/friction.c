real move,e,t,g,nus,nuk,sin,cos,l;
function f = [(move),1];
@pre(((t>=0) and (nus >= nuk)));
g = 9.8;
nuk = 0.2;
nus = 0.3;
sin = 0.5;
cos = 0.86;
l = 10;
if(sin >= (nus*cos))
{
    move = 1;
    t = f;
    e = (((t*t)*((g*sin) - (g*(nuk*cos)))) - (2*l));
}
else
{
    move = 0;
    e=0;
    t = f;
}
@post((((e>=0) and (e<=0)) and (t>= 0)));