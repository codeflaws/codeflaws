#include <stdio.h>
#include <stdlib.h>

#define N 210
#define M 2
int a[N], n;
double p[N];

double max(double a, double b) { return a>b?a:b; }

double f(int i, int k, int l) {
	static double c[N][M*N][N];
	static int kn[N][M*N][N];
	if(k>M*N) k=M*N;
	if(l<0) l=0;

	if(i>=n) return k>=(M-1)*N && l<=0;
	else if(kn[i][k][l]) return c[i][k][l];
	else return kn[i][k][l]=1, c[i][k][l]=
		p[i]*f(i+1, k+a[i], l-1) + (1-p[i])*f(i+1, k, l);
}

int main(int argc, char *argv[]) {
	int k,l,i;
	scanf("%d %d %d", &n,&l,&k);
	for(i=0;i<n;++i) {
		int j;
		scanf("%d", &j);
		p[i]=0.01*j;
	}
	for(i=0;i<n;++i) scanf("%d", a+i);
	printf("%f\n", f(0,k+(M-1)*N,l));
}
