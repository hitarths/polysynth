// float division (float P, float Q, float E)
real P,Q,E,a,b,d,y;
@pre(  (((Q >= P) and  (P >= 0))  and  (E >= 0)));
    a=0;
    b=(Q/2);
    d=1;
    y=0;
    // inv(   a == Q*y   &&   b == Q*d/2   &&   P/Q - d < y   &&   y <= P/Q   );
    while( (d>= E), (((((a==(Q*y)) and (b== (Q*(d/2)))) and ((P - (d*Q)) <= (y*Q))) and ((y*Q) <= P)) and (Q>=0)))         
    {
        if ((P <=  (a+b)))
        {
            // b = (b/2);
            b = [(b),1];
            d = (d/2);
        }
        else
        {
            // a = (a+b);
            a = [(a,b),1];
            // y = (y+(d/2));
            y = [(y,d),1];
            b = (b/2);
            d = (d/2);
        }
    }
// @post((a== (Q*y)));
// @post(P>= (y*Q));    
    @post(((P >= (y*Q))   and   ((y*Q) >= (P - (E*Q)))));
// @post((((y*Q) >= (P - (E*Q)))));