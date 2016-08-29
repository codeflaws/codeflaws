#include <stdio.h>
#include <stdlib.h>

enum { N=1000, M=1000, K=500000 };

void swap(void *v1, void *v2, size_t n) {
	char *a=v1, *b=v2;
	while (n-->0) { char c=*a; *a++=*b; *b++=c; }
}


int n,m,k,i,t[N][M],r[N],c[M],x,y;
char s;

int main(int argc, char *argv[]) {
	printf("main\n");
	scanf("%d %d %d", &n, &m, &k);
	for (i=0; i<n; ++i) {
		int j;
		for (j=0; j<m; ++j) {
			scanf("%d", &t[i][j]);
		}
	}
	for (i=0; i<n; ++i) r[i]=i;
	for (i=0; i<m; ++i) c[i]=i;
	for (i=0; i<k; ++i) {
		scanf("\n%c %d %d", &s, &x, &y);
		--x; --y;
		switch (s) {
			case 'g':
				printf("%d\n", t[r[x]][c[y]]);
				break;
			case 'r':
				swap(r+x, r+y, sizeof *r);
				break;
			case 'c':
				swap(c+x, c+y, sizeof *c);
				break;
			default: break;
		}
	}
	exit(EXIT_SUCCESS);
return 0;
}
