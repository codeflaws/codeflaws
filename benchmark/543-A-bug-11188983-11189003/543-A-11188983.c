#include <stdio.h>

int a[501];
int dp[2][501][501];

int main(int argc, char *argv[]){
	int n, m, b, mod, ii, i, j, k;
	scanf("%d%d%d%d", &n, &m, &b, &mod);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	dp[0][0][0] = 1;
	for(ii = 1; ii <= n; ii++){
		i = ii & 1;
		for(j = 0; j <= m; j++){
			for(k = 0; k <= b; k++){
				dp[i][j][k] = dp[i^1][j][k];
				if(j > 0 && k >= a[ii-1]){
					dp[i][j][k] += dp[i][j-1][k-a[ii-1]];
				}
				while(dp[i][j][k] >= mod) dp[i][j][k] -= mod;
			}
		}
	}
	int ans = 0;
	for(i = 1; i <= b; i++){
		ans += dp[n&1][m][i];
		while(ans >= mod) ans -= mod;
	}
	printf("%d\n", ans);
	return 0;
}