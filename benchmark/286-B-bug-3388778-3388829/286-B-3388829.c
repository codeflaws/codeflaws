#include <stdio.h>
#include <string.h>

int n, a[1<<22];

int main(int argc, char *argv[])
{
	int i, j, k;
	scanf("%d", &n);
	if ( n == 1 )
	{
		puts("1");
		return 0;
	}
	memset(a, -1, sizeof(a));
	for ( i = 0; i < n; ++i )
		a[i] = i;
	for ( k = 1; ++k <= n; )
	{
		int last = n + k - 2;
		for ( i = last - (last-k+2) % k; i >= 0; i -= k )
			if ( a[i] >= 0 )
			{
				j = i + k;
				if ( last < j )
					j = last;
				a[j] = a[i];
				a[i] = -1;
			}
	}
	for ( i = 0; i < n; ++i )
		printf(" %d"+!i, a[i+n-1]+1);
	puts("");
	return 0;
}
