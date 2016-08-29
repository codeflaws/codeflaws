#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,d,p,k,m;
	long long b[2]={0,0};
	scanf("%d %d\n",&n,&d);
	p=0;
	m=0;
	scanf("%d",&b[p]);
	while (--n) {
		p=!p;
		scanf("%d",&b[p]);
		if (b[p]>b[!p]) continue;
		k=(b[!p]-b[p])/d+1;
		b[p]+=k*d;
		m+=k;
	}
	printf("%i\n",m);
	return 0;
}
