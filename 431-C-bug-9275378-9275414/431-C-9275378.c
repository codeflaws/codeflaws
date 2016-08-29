#include <stdio.h>
#include <string.h>

#define MAXN    101
#define MOD     1000000007


void Fun(int Dp[MAXN][MAXN], const int N, const int K, int *Ans)
{
    int i, j, k;
    memset(Dp, 0, sizeof(int)*MAXN * MAXN);
    for(i = 1; i <= K; ++i)
    {
        Dp[1][i] = 1;
    }
    *Ans = Dp[1][N];
    for(i = 2; i <= N; ++i)
    {
        for(j = i - 1; j <= N; ++j)
        {
            for(k = 1; k <= K && j + k <= N; ++k)
            {
                Dp[i][j + k] += Dp[i - 1][j];
                Dp[i][j + k] %= MOD;
            }
        }
        *Ans += Dp[i][N];
        *Ans %= MOD;
    }
}

int main(int argc, char *argv[])
{
    int N, K, D, Ans, R;
    int Dp[MAXN][MAXN];
    scanf("%d %d %d", &N, &K, &D);
    Fun(Dp, N, K, &Ans);
    Fun(Dp, N, D - 1, &R);
    printf("%d\n", Ans - R);
    return 0;
}
