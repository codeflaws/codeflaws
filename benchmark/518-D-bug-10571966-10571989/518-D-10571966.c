#include <stdio.h>
#define MAXN 2003

int main(int argc, char *argv[])
{
    int n, t, i, j, cur = 0;
    double p, f[2][MAXN];
    scanf("%d%lf%d", &n, &p, &t);
    // f[t][n] -> the possibility that (exactly) n people
    // are standing on the escalator after t seconds
    for (i = 1; i <= n; ++i) f[cur][i] = 0;
    f[cur][0] = 1;
#define next (!cur)
    for (i = 0; i < t; ++i) {
        for (j = 0; j <= i; ++j)
            if (j >= n) f[next][j] += f[cur][j];
            else {
                f[next][j + 1] += f[cur][j] * p;
                f[next][j] += f[cur][j] * (1.0 - p);
            }
        cur = !cur;
        for (j = 0; j <= n; ++j) f[next][j] = 0;
    }
#undef next
    double ans = 0;
    for (i = 0; i <= n; ++i) ans += f[cur][i] * i;
    printf("%g\n", ans);
    return 0;
}
