#include "stdio.h"

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

#define N 4005
#define T 86400

int best[N][N], n, k, t[N], d[N], i, j, ans;

int main(int argc, char *argv[])
{
	scanf( "%d%d", &n, &k );
	for( i = 1; i <= n; i++ ) scanf( "%d%d", &t[i], &d[i] );
	t[n+1] = T+1;
	for( i = 1; i <= n+1; i++ )
	{
		ans = max( ans, t[i] - 1 - best[i-1][k] );
		best[i][0] = max( best[i-1][0], t[i] - 1 ) + d[i];
		for( j = 1; j <= k; j++ ) best[i][j] = min( best[i-1][j-1], max( best[i-1][j], t[i] - 1 ) + d[i] );
	}
	printf( "%d\n", ans );
	return 0;
}
