#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(a, b) (a < b ? a : b)
#define ABS(a) ((a) < 0 ? -(a) : (a))

int n, k, dp[2222];
long long a[2222];

int func(long long thre) {
    int i, j;
    dp[0] = 0;
    for (i = 1; i < n; i++)
        for (dp[i] = i, j = 0; j < i; j++)
            if (abs(a[j] - a[i]) <= (i - j) * thre)
                dp[i] = MIN(dp[i], dp[j] + i - j - 1);
    for (i = 0; i < n; i++)
        if (dp[i] + n - 1 - i <= k)
            return 1;
    return 0;
}

int main(int argc, char** argv) {
    int i;
    long long low, up, mid, ac;

    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%I64d", &a[i]);

    low = 0;
    up = 0x7fffffffLL;
    while (low <= up) {
        mid = low + up >> 1;
        if (func(mid)) {
            ac = mid;
            up = mid - 1LL;
        }
        else
            low = mid + 1LL;
    }

    printf("%I64d\n", ac);
    return 0;
}
