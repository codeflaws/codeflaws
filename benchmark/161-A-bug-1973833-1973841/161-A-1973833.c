#include <stdio.h>
#include <stdlib.h>

int n,m,x,y,a[100000],b[100000],v[100000],i,j,k;

int main(int argc, char *argv[]) {
	scanf("%d %d %d %d", &n, &m, &x, &y);
	for (i=0; i<n; ++i) scanf("%d", &a[i]);
	for (i=0; i<m; ++i) scanf("%d", &b[i]);
	for (i=0; i<n; ++i) {
		while (j<m && b[j]+x<a[i]) {
			++j;
		}
		if (a[i]-x<=b[j]&&b[j]<=a[i]+y) v[i]=++j;
	}
	for (i=0; i<n; ++i) if (v[i]) ++k;
	printf("%d\n", k);
	for (i=0; i<n; ++i) if (v[i]) printf("%d %d\n", i+1, v[i]);
	exit(EXIT_SUCCESS);
return 0;
}
