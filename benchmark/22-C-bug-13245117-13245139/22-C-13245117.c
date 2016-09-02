#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,m,v;
	scanf("%d %d %d\n",&n,&m,&v);
	if (n-1>m||(n-2LL)*(n-1)/2+1<m) printf("-1\n");
	else {
		int a,b,c,i,s;
		if (v==n) {
			a=2,b=n;
			printf("%d %d\n",1,v);
		} else {
			a=1,b=n-1;
			printf("%d %d\n",v,n);
		}
		c=1;
		s=1;
		i=1;
		while (c<m) {
			if (i+s>b) s++,i=a;
			else {
				printf("%d %d\n",i,i+s);
				i++;
				c++;
			}
		}
	}
	return 0;
}
