real a,b,x,u,v,y;
@pre(((a>=b) and (b>= 0)));
    x = a;
    y = b;
    u = b;
    v = a;
    while((1>=0), ((((u*x) + (v*y)) + ((-2*a)*b)) == 0))
    {
        if(x>=y)
        {
            // x = (x - y);
            x = [(x,y),1];
            y = y;
            u  = u;
            // v = [(u,v),1];
            v = (u + v);
        }
        else
        {
            x = x;
            y = (y-x);
            u = [(u,v),1];
            // u = (u+v);
            v = v;
        }
    }

@post(1>=0);
// @post( ((((a+1)*(a+1)))>=(n+1)));
// @post((((a*a) <= n) and (((a+1)*(a+1)) >= (n+1))));






// (x, y, u, v):=(a, b, b, a);
// while x 6= y do
// if x > y
// (x, y, u, v):=(x − y, y, u, u + v);
// else
// (x, y, u, v):=(x, y − x, u + v, v);
// end if
// end while