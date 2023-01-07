real a,b,p,q,r,s,x,y;
@pre(((x>=0) and (y>=0)));
a = x;
b = y;
p = 1;
q = 0;
r = 0;
s = 1;
while(1>=0,((a== ((y*r)+(x*p))) and (b == ((x*q) + (y*s)))))
{
    if(a>=b)
    {
        // a = (a-b); 
        a = [(a,b),1];
        // p = (p-q); 
        p = [(p,q),1];
        r = (r-s);
    }
    else
    {
        // b = (b-a); 
        b = [(a,b),1];
        q = (q-p); 
        // s = (s-r);
        s = [(s,r),1];
    }
}
@post(1>=0);



// int gcd (int x, int y)
// pre(  x > 0  &&  y > 0   ); 
//     {
//     int a,b,p,q,r,s;

//     a=x;
//     b=y;
//     p=1;
//     q=0;
//     r=0;
//     s=1;

//     inv(    GCD(a,b) == GCD(x,y)    &&    a == y*r + x*p    &&    b == x*q + y*s    );
//     while(a!=b) 
//         { 

//         if (a>b) {a = a-b; p = p-q; r=r-s;}

//         else {b = b-a; q = q-p; s = s-r;}

//         }

//     assert(   GCD(x,y) == y*r + x*p   );

//     return a;
//     }
// post(   result==GCD(x,y)   );