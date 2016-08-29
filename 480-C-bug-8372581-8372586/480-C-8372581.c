#include <stdio.h>

#define MOD 1000000007

int dp[5001][5001];

int main(int argc, char *argv[]) {
    int i, j;
    int n, a, b, k;
    int ans;

    scanf("%d %d %d %d", &n, &a, &b, &k);

    dp[0][a] = 1;
    for (i = 1; i <= k; i++) {
        int sum[5001];

        sum[0] = 0;
        for (j = 1; j <= n; j++)
            sum[j] = (sum[j - 1] + dp[i - 1][j]) % MOD;

        for (j = 1; j <= n; j++)
            if (j < b)
                dp[i][j] = (sum[(j + b - 1) / 2] - dp[i - 1][j] + MOD) % MOD;
            else if (j > b)
                dp[i][j] = ((sum[n] - sum[(j + b) / 2] + MOD) % MOD - dp[i - 1][j] + MOD) % MOD;
    }

    ans = 0;
    for (j = 1; j <= n; j++)
        ans += dp[k][j];

    printf("%d\n", ans);

    return 0;
}
