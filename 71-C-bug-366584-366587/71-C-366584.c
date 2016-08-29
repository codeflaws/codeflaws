#include <stdio.h>

int n, m, p, q, a[100000], ok, i, j;

int main(int argc, char *argv[])
{
	scanf( "%d", &n );
	for( i = 0; i < n; i++ ) scanf( "%d", &a[i] );
	for( m = n, p = 2; p <= m; p++ ) if(!(m%p))
	{
		q = n/p;
		for( i = 0; i < q; i++ )
		{
			ok = 1;
			for( j = i; j < n; j += q ) ok &= a[j];
			if(ok)
			{
				printf( "YES\n" );
				return 0;
			}
		}
		while(!(m%p)) m /= p;
	}
	printf( "NO\n" );
	return 0;
}
