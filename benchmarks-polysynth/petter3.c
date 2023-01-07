real n,k,N,s;
@pre(N>=0);

s = 0;
n=0;
// k = 0;
while (n <= N, (s == (((0.25*n)*n)*((n+1)*(n+1))) and (n <= (N+1)))  ){
	// s = (s+ (n*(n*n)));
	s = (s + [(n),3]);
	n = (n+1);
}
@post(1>=0);