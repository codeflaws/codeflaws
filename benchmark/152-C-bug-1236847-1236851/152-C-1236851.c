#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare (const void * a, const void * b)
{
  return ( *(char*)a - *(char*)b );
}

int main(int argc, char *argv[]) {
    int n, m, i, j, k, t, r;
	long long int sum = 1;
	char s[101][101];
	char a[101][101];
	int b[101];
	for (i = 0;i < 101;i++) b[i] = 0;
	scanf("%d%d",&n,&m);
	for (i = 0;i < n;i++) scanf("%s",s[i]);
	for (i = 0;i < n;i++) {
	    for (j = 0;j < m;j++) {
		    a[i][j] = s[i][j] - '0';
		}
	}
	for (i = 0;i < n;i++) {
	    for (j = 0;j < m;j++) {
		    a[j][i] = s[i][j];
		}
		a[i][n] = '\0';
	}
	for (i = 0;i < m;i++) {
	    qsort(a[i],n,sizeof(char),compare);
		r = 1;
		j = 0;
		while (j < n-1) {
		    if (a[i][j] != a[i][j+1]) r++;
			j++;
		}
		//printf("%d %d\n",r,sum);
		sum = (sum*r)%1000000007;
	}
	printf("%I64d\n",sum);
	return(0);
}
