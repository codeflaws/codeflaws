#include <stdio.h>

int a[101][101];

int main(int argc, char *argv[])
{
	int n, m, i, j;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i ++)
		for(j = 0; j < n; j ++)
			scanf("%d", &a[i][j]);
			
	m = (n + 1) / 2;
	j = 0;
	
	for(i = 0; i < n; i ++)
		j += a[i][i] + a[i][n - i - 1] + a[m][i] + a[i][m];
		
	j -= 3 * a[m][m];
	
	printf("%d\n", j);

	return 0;
}
