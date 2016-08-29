#include <stdio.h>

int main(int argc, char *argv[]) {
	long long a,b,n,x,p,s,i;
	scanf("%lld %lld %lld\n",&a,&b,&n);
	x=0;
	p=0;
	s=1;
	if (a*b<0) s=-1;
	while (p*p<b*b) {
		x++;
		p=a;
		for (i=0;i<n;i++) p*=x*s;
	}
	if (p==b) printf("%lld\n",x*s);
	else printf("No solution\n");
return 0;
}
