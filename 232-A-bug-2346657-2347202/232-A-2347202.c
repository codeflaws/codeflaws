#include <stdio.h>
#include <string.h>

int n, k;
char a[128][128];

void insert(int x)
{
	int i, j;
	n += x;
	for ( i = n - x; i < n; ++i )
		for ( j = i; ++j < n; )
			a[i][j] = a[j][i] = 1;
}

int solve(int k)
{
	int i, j, c;
	memset(a, 0, sizeof(a));
	n = 2;
	for ( i = 0; ++i * (i+1) * (i+2) <= 6 * k; ) ;
	while ( i && k > 0 )
	{
		int c = i * (i+1) * (i+2) / 6;
		if ( k >= c && k - c < 10 )
		{
			k -= c;
			insert(i);
		}
		else if ( k >= c )
		{
			int pn = n;
			k -= (i+1) * (i+2) * (i+3) / 6;
			insert(i + 1);
			c = n;
			while ( k < 0 && c - 2 >= pn )
			{
				a[c-1][c-2] = a[c-2][c-1] = 0;
				c -= 2;
				k += i + 1;
			}
			c = n - 1;
			while ( k < 0 )
			{
				a[c-1][c-2] = a[c-2][c-1] = 0;
				c -= 2;
				k += i - 1;
			}
		}
		else
			--i;
	}
	a[0][1] = a[1][0] = 1;
	for ( i = 1; ++i < n; )
		a[i][0] = a[0][i] = a[1][i] = a[i][1] = 1;
	return n;
}

int main(int argc, char *argv[])
{
	int i, j;
	scanf("%d", &k);
	printf("%d\n", solve(k));
	for ( i = 0; i < n; ++i )
	{
		for ( j = 0; j < n; ++j )
			printf("%d", a[i][j]);
		puts("");
	}
	return 0;
}
