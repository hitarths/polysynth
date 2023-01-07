real a,su,t,n;
@pre(n>=0);
    a = 0;
    su = 1;
    t = 1;    
    while ( (su <= n), ((((a*a) <= n  and (t == ((2*a) + 1))) and (su == ((a+1)*(a+1))))))
    {
        a = (a+1);
        t = ([(t),1]);
        su = ([(su,t),1]);
    }
@post( ((a*a) <= n));
// @post( ((((a+1)*(a+1)))>=(n+1)));
// @post((((a*a) <= n) and (((a+1)*(a+1)) >= (n+1))));