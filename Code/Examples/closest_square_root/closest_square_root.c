real a,x,r;
@pre( a >= 1 );
   x = (a*0.5);
   r = 0;
   while( (x>=(r)), ((a == ( ([(x), 1] +  (r*r)) - r) ) and (x>=0)))
   {
      x = ([(x,r),1]);
      r = (r + 1);
   }
// @post(((((r*r) - r) >= (a-(2*r)))));
@post(((((r*r) - r) >= (a-(2*r))) and  (((r*r) - (r)) <= (a))));