real c1, c2, k0,r,w,k;
@pre(((c1 >= 0 and c2 >= 0) and k0 >= 0));
r = 0;
w = 0;
k = k0;

while(1>=0, (((((r*c1) + (w*c2)) + k) == k0) and ((r*w) == 0)))
{
    ndif
    {
        [assume(w == 0)]
        {
            r = (r + 1);
            // k = (k - c1);
            k = [(k,c1),1];

        }
        [assume(r == 0)]
        {
            w = (w + 1);
            k = (k - c2);

        }
        [assume(w == 0)]
        {
            r = (r - 1);
            // k = (k + c1);
            k = [(k,c1),1]; 


        }
        [assume(r == 0)]
        {
            w = (w-1);
            // k = (k+c2);
            k = [(k,c2),1];
        }
    }
}
@post(1>=0);



