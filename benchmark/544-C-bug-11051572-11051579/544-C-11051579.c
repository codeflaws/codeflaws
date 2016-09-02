#include <stdio.h>
int n,m,b;
int dp[501][501];
int mod;
int lim,i,j,errs,a;

int main(int argc, char *argv[]) {
	scanf("%d%d%d%d",&n,&m,&b,&mod);
	for(i=0;i<m; ++i) for(j=0;j<=b; ++j) dp[i][j] = 0;
	dp[0][0] = 1;
	for(i=0; i<n; ++i) {
		scanf("%d",&a);
		for(j=0; j<m; ++j) {
			lim = b - a;
			for(errs = 0; errs <= lim; ++errs) {
				dp[j+1][errs + a] = (dp[j+1][errs + a] + dp[j][errs])%mod;
			}
		}		
	}
	int ans = 0;
	for(errs=0;errs<=b;++errs) ans = (ans + dp[m][errs])%mod;
	printf("%d\n",ans);
	return 0;
}