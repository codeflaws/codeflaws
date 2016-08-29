#include <stdio.h>
#include <stdlib.h>

#define N 50
#define M 50

int na, ma, nb, mb, a[N][M], b[N][M];

int overlapfactor(int x, int y) {
	int i, ret=0;
	for (i=0; i<na&&i+x<nb; ++i) {
		int j;
		for (j=0; j<ma&&j+y<mb; ++j) if (i+x>=0&&j+y>=0) {
			ret+=a[i][j]*b[i+x][j+y];
		}
	}
	return ret;
}

void readtable(int t[N][M], int *n, int *m) {
	int i;
	scanf("%d %d\n", n, m);
	for (i=0; i<*n; ++i) {
		int j;
		for (j=0; j<*m; ++j) {
			t[i][j]=getchar()-'0';
		}
		getchar();
	}
}

int main(int argc, char *argv[]) {
	int i, ans=0, n, m, p, q;
	readtable(a, &na, &ma);
	readtable(b, &nb, &mb);
	n=na>nb?na:nb; m=ma>mb?ma:mb;
	for (i=-n; i<n; ++i) {
		int j;
		for (j=-m; j<m; ++j) {
			int k=overlapfactor(i, j);
			if (k>ans) {
				ans=k;
				p=i;
				q=j;
			}
		}
	}
	printf("%d %d\n", p, q);
	exit(EXIT_SUCCESS);
}
