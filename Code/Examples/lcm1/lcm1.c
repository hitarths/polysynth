real a,b,x,y,u,v;
@pre(((a>=0) and (b>=0)));
x = a;
y = b;
u = b;
v = 0;
while(1>=0,(((x*u)+(y*v))==(a*b)))
{
    while(1>=0,(((x*u)+(y*v))==(a*b)))
    {
        // x = (x-y);
        x = [(x,y),1];
        v = (v+u);
    }
    while(1>=0,(((x*u)+(y*v))==(a*b)))
    {
        y = (y-x);
        // u = (u+v);
        u = [(u,v),1];
    }
}
@post(1>=0);




// int lcm (int a, int b)
// pre( a>0 && b>0 ); 
//     {
//     int x,y,u,v;

//     x=a;
//     y=b;
//     u=b;
//     v=0;

//     inv( GCD(x,y) == GCD(a,b) && x*u + y*v == a*b );
//     while(x!=y) 
//         { 

//         inv( GCD(x,y) == GCD(a,b) && x*u + y*v == a*b ); 
//         while (x>y)
//             {
//             x=x-y;
//             v=v+u;
//             }

//         inv( GCD(x,y) == GCD(a,b) && x*u + y*v == a*b );
//         while (x<y)
//             {
//             y=y-x;
//             u=u+v;
//             }
//         }
//     return u+v;
//     }
// post( result == LCM(a,b) );