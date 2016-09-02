#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,n,l,r,c,a[100000];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	r=c=0;
	for (i=1;i<n;i++) r+=a[i];
	l=a[0];
	for (i=1;i<n;i++) {
		c+=(l==r);
		l+=a[i];
		r-=a[i];
	}
	printf("%d\n",c);
	return 0;
}
