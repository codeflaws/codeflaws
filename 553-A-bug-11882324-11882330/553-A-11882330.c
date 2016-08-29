#include <stdio.h>

#define MOD 1000000007

int main(int argc, char *argv[])
{
    int i, j, N, Num, Sum = 0, Ans = 1;
    int C[1001][1001];
    for(i = 0; i < 1001; ++i) {
        C[i][0] = 1;
        for(j = 1; j <= (i + 1) / 2; ++j) {
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
        }
        for(j = (i + 1) / 2 + 1; j <= i; ++j) {
            C[i][j] = C[i][i - j];
        }
    }
    scanf("%d", &N);
    for(i = 0; i < N; ++i) {
        scanf("%d", &Num);
        Sum += Num;
        if(i != 0) {
            Ans = ((long long)Ans * C[Sum - 1][Num - 1]) % MOD;
        }
    }
    printf("%d\n", Ans);
    return 0;
}
