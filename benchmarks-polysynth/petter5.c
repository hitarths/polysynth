real n,k,N,s;
@pre(N>=0);

s = 0;
n=0;
// k = 0;
while (n <= N, (s == (((n*n)*(n*n))*(n*n)) and (n <= (N+1)))  ){
	// s = (s+ (n*(n*n)));
	s = (s + [(n),5]);
	n = (n+1);
}
@post(1>=0);