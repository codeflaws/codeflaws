#include "stdio.h"

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int dp[4005], n, k, t, d, i, ans;

int main(int argc, char *argv[])
{
	scanf( "%d%d", &n, &k );
	while(n--)
	{
		scanf( "%d%d", &t, &d );
		ans = max( ans, t - 1 - dp[k] );
		for( i = k; i >= 1; i-- ) dp[i] = min( dp[i-1], max( dp[i], t-1 ) + d );
		dp[0] = max( dp[0], t - 1 ) + d;
	}
	ans = max( ans, 86401 - dp[k] );
	printf( "%d\n", ans );
	return 0;
}
