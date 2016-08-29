#include <stdio.h>
int main(int argc, char *argv[]) {
	long long i,k,n,d,m,l;
	scanf("%lld %lld %lld %lld\n",&n,&d,&m,&l);
	n*=m;
	for (i=k=0;k<n;k+=m) {
		if (i<k) break;
		i=(k+l)/d*d+d;
	}
	printf("%lld\n",i);
	return 0;
}
