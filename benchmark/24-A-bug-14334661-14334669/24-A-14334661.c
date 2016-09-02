#include <stdio.h>

int x[101][101];

int main(int argc, char *argv[]) {
	int i,n,a,b,c;
	scanf("%d\n",&n);
	int s=0;
	for (i=0;i<2*n;i+=2) {
		scanf("%d %d %d\n",&a,&b,&c);
		x[a][b]=c;
		x[b][a]=-c;
		s+=c;
	}
	int z=a;
	printf("%d %d\n",a,b);
	int d=0;
	printf("%d\n",a);
	do {
		if (x[a][b]>0) d+=x[a][b];
		for (i=1;i<=n;i++)
			if (x[a][i]&&i!=b) {
				b=a;
				a=i;
				break;
			}
	} while (a!=z);
	if (d>s-d) d=s-d;
	printf("%d\n",d);
	return 0;
}
