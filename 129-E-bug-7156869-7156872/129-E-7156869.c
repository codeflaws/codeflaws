// written based on editorial
#include <stdio.h>
#include <string.h>

enum {
    N = 1010
};
const int MOD = 1e9 + 7;

int c[N][N];

int binom(int n, int m) {
    if(m == n || m == 0)
        return 1;
    if(n == 0)
        return 0;
    if(c[n][m] != -1)
        return c[n][m];
    return c[n][m] = (binom(n - 1, m - 1) + binom(n - 1, m)) % MOD;
}

int main(int argc, char *argv[]) {
    int n, m, k;
    memset(c, -1, sizeof(c));
    scanf("%d %d %d", &n, &m, &k);
    long long val = binom(n - 1, 2 * k) * binom(m - 1, 2 * k);
    printf("%d\n", (int)(val % MOD));
    return 0;
}
