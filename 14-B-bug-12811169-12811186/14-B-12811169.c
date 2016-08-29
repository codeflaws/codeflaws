#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,a,b,n,x,l,r,t;
	scanf("%d %d\n",&n,&x);
	l=0;
	r=1000;
	for (i=0;i<n;i++) {
		scanf("%d %d\n",&a,&b);
		if (a>b) t=a,a=b,b=t;
		if (a>l) l=a;
		if (b<r) r=b;
	}
	if (r-l<0) printf("-1\n");
	else if (abs(r-x)<abs(x-l)) printf("%d\n",abs(r-x));
	else printf("%d\n",abs(x-l));
	return 0;
}
