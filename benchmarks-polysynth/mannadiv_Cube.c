real n, y, x, t;
@pre((n >= 0));
y = n;
x = 0;
t = 0;
// inv( x^3 + 3*t + (y-n) == 0 );
// while((y >= 0), ([(x,t,y,n), 3]==0)) 
while((y >= 0), ((((((x*x)*x) + (3*t)) + y) - n) ==0)) 
{
	if ((t == (x*x))) 
  {
       // y = ((y - (3*x)) - 1);
      y = [(y,x),1];
       t = 0;
       x = (x + 1);
  }
  else 
  {
       y = (y - 3);
       t = (t + 1);
  }
}
@post(1>=0);

