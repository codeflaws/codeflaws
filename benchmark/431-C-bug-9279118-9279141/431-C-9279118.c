#include <stdio.h>
#include <stdlib.h>

#define MAX_N (100)
#define MOD   (1000000007)

int dp[2][MAX_N+1];

void build_dp(int n, int k, int d) {
  int j,m;

  dp[0][0] = 1;
  for ( j=1; j <= n; ++j )
    for ( m=1; m <= k; ++m )
      dp[0][j] += j-m >= 0 ? dp[0][j-m] : 0, dp[0][j] %= MOD;
  for ( j=1; j <= m; ++j ) {
    for ( m=1; m < d; ++m )
      dp[1][j] += j-m >= 0 ? dp[1][j-m] : 0, dp[1][j] %= MOD;
    for ( m=d; m <= k; ++m )
      dp[1][j] += j-m >= 0 ? dp[0][j-m] : 0, dp[1][j] %= MOD;
  }
}

int main(int argc, char *argv[]) {
  int n,k,d;

  scanf("%d %d %d", &n, &k, &d);
  build_dp(n, k, d);
  printf("%d\n", dp[1][n]);
  return EXIT_SUCCESS;
}
