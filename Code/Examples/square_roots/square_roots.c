real a,err,r,q,p;
@pre((((a>= 1) and (err >= 0))));
r = (a + -1);
q = 1;
p = 0.5;
while( ((2*(p*r)) >= err), ((((((p>=0)) and (r>=0)) and (((q*q) + ((2*r)*p))== a))))) 
{
    if ( (( ((2*r) + (-2*q)) + (-1*p)) >= 0))
    {
        r = [(r,p,q),1];
        q = (p + [(q),1]);
        p = (p/2);
    }
    else
    {
        r = [(r),1];
        p = (p*0.5);
    }
}
@post(((((q*q) >= (a - err))) and ((((q*q)) <= a))));