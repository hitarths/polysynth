real n,p,q,r,h;
@pre((n >= 0));
p = 0;
q = 1;
r = n;

while((q<=n), ((((p==0) and (r==n)) and (n>=0)) and (([(q,n),1])>=0)))
{
  q = (4*q);
}
while((q>=4), (((r>=0) and (r<= (((2*p)+ q)-1))) and (((p*p) + (r*q)) == (n*q) )))
{
  q = (q*0.25);
  h = (p+q);
  p = (p*0.5);
  if(r>=h)
  {
    p = (p+q);
    r = (r-h);
  }
}
// @post(1>=0);
// @post((((p*p)<=n) and (((p+1)*(p+1)) >= (n+1))));
@post((p*p)<=n);




// # int sqrt (int n)
// # pre( n>=0 );
// #     {
// #     int p,q,r,h;
// #
// #     p=0;
// #     q=1;
// #     r=n;
// #
// #     inv(   n >= 0   &&   p == 0   &&   r==n   &&  exists ( int   k; k >= 0  &&  q == 4^k )  );
// #     while (q<=n) q=4*q;
// #
// #     inv(  exists (  int  l;  l >= 0  &&  q ==4^l )   &&   r >= 0   &&   r < 2*p + q   &&   p^2 + r*q == n*q   );
// #     while (q!=1)
// #         {
// #         q=q/4;
// #         h=p+q;
// #         p=p/2;
// #         if (r>=h)
// #             {
// #             p=p+q;
// #             r=r-h;
// #             }
// #         }
// #
// #     return p;
// #     }
// # post(  result^2 <= n   &&   ( result + 1) ^2 > n  );