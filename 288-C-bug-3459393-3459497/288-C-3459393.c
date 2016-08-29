#include <stdio.h>

int n, a[1<<20];

int main(int argc, char *argv[])
{
	int i, j, k;
	long long res = 0;
	scanf("%d", &n);
	for ( k = n; k; --k )
	{
		for ( j = k + 1; j != (j&-j); j += j&-j ) ;
		--j;
		for ( i = j - k; i <= k; ++i )
			res += (a[i] = j - i) ^ i;
		k = j - k;
	}
	printf("%lld\n", res);
	for ( i = 0; i <= n; ++i )
		printf(" %d"+!i, a[i]);
	puts("");
	return 0;
}
