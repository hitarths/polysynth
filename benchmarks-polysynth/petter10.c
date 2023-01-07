real n,k,N,s;
@pre(N>=0);

s = 0;
n=0;
// k = 0;
while (n <= N, (0 == [(s, n), 11] and (n <= (N+1)))  ){
	// s = (s+ (n*(n*n)));
	// s = (s + [(n),10]);
    s = (s + ((((n*n)*(n*n))*(n*n))*(((n*n)*(n*n)))));
	n = (n+1);
}
@post(1>=0);