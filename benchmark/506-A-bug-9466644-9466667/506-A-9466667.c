#include <stdio.h>
#include <string.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

int dp[30001][501];
int gem[30001];

int main(int argc, char *argv[]) {
    int i, j, k;
    int n, d;
    int ans;

    scanf("%d %d", &n, &d);
    for (i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);
        gem[p]++;
    }

    memset(dp, -1, sizeof dp);
    dp[d][250] = gem[d];
    for (i = d + 1; i <= 30000; i++)
        for (j = 1; j <= 499; j++) {
            int jump = d + j - 250;
            if (jump > 0 && i - jump >= 0) {
                dp[i][j] = max(max(dp[i - jump][j - 1], dp[i - jump][j]), dp[i - jump][j + 1]);
                if (dp[i][j] >= 0)
                    dp[i][j] += gem[i];
            }
        }

    ans = 0;
    for (i = d; i <= 30000; i++)
        for (j = 0; j <= 500; j++)
            ans = max(ans, dp[i][j]);

    printf("%d\n", ans);

    return 0;
}
