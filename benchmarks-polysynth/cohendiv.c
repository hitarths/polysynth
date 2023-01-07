real x,y,q,r,d,dd;
@pre( ((x >= 0) and (y>=1)));
   q = 0;
   r = x;
   while( (r>=(y)), ((x== ((q*y) + r)) and (r>=0)))
   {
      d = 1;
      dd = y;
      while((r>=(2*dd)),((((dd == (y*d)) and (x==((q*y)+ r))) and (r>=0)) and (r>=(y*d))))
      {
         d = (2*d);
         // dd = (2*dd);
         dd = [(dd),1];
      }
      r = (r - dd);
      q = [(q,d),1];
      // q = (q + d);
   }
@post((1>=0));
// @post((q*y) == x);





// int division (int x, int y)
// pre( x >= 0 && y > 0 );
//     {
//     int q,r;

//     q=0;
//     r=x;

//     inv( x==q*y+r && r >= 0 );
//     while( r>=y )
//         {

//         int d,dd;

//         d=1;
//         dd=y;

//         inv( r>=y*d && dd==y*d && x==q*y+r && r>=0 ); 
//         while ( r>= 2*dd ) 
//             {
//             d = 2*d;
//             dd = 2*dd;
//             }
//         r=r-dd;
//         q=q+d;
//         }

//     assert( q==x/y );

//     return r;
//     }
// post( result == x % y);