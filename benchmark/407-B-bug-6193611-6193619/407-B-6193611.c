#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    int n, p[1000];
    long long sum[1001], dp[1000], ans;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    sum[0] = 0LL;
    for (i = 0; i < n; i++) {
        dp[i] = (sum[i] - sum[p[i]] + 2 + 1000000007LL + 1000000007LL) % 1000000007LL;
        sum[i + 1] = (sum[i] + dp[i]) % 1000000007LL;
    }

    ans = 0LL;
    for (i = 0; i < n; i++)
        ans += dp[i];

    printf("%lld\n", ans % 1000000007LL);

    return 0;
}
