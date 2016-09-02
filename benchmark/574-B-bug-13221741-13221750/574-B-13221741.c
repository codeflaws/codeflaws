#include <stdio.h>

int c[4001][4001],f[4001];

int main(int argc, char *argv[]) {
	int a,b,t,n,m,i,j,k,l;
	scanf("%d %d\n",&n,&m);
	for (i=0;i<m;i++) {
		scanf("%d %d\n",&a,&b);
		c[a][b]=c[b][a]=1;
		f[a]++;
		f[b]++;
	}
	int min=1e9;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			if (c[i][j]) {
				int s[4001];
				for (k=1;k<=n;k++) s[k]=c[i][k]||c[j][k];
				for (k=1;k<=n;k++)
					if (c[i][k]&&c[j][k])
						if (f[i]+f[j]+f[k]<min) min=f[i]+f[j]+f[k];
			}
	if (min=1e9) min=5;
	printf("%d\n",min-6);
	return 0;
}
