#include <stdio.h>

#define N 301

int x[N][N],l[N],v[N],p[2*N],n,c;

int go(int a,int b) {
	if (a==b) return 1;
	int i;
	v[a]=1;
	for (i=1;i<=n;i++)
		if (x[a][i]&&!v[i])
			if (go(i,b)) {
				x[a][i]=0;
				break;
			}
	p[c++]=a;
	return i<=n;
}

int main(int argc, char *argv[]) {
	int i,k,a,b;
	scanf("%d\n",&n);
	for (i=1;i<n;i++) {
		scanf("%d %d\n",&a,&b);
		x[a][b]=x[b][a]=1;
	}
	l[0]=1;
	k=1;
	while (EOF!=scanf("%d",&l[k])) k++;
	l[k]=1;
	for (i=k;i;i--) {
		if (!go(l[i-1],l[i])) break;
		int j;
		for (j=1;j<=n;j++) v[j]=0;
	}
	if (i) printf("-");
	else for (i=c-1;i>=0;i--) printf("%d ",p[i]);
	printf("1\n");
	return 0;
}
