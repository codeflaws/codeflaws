// write in C...
#include <stdio.h>

#ifdef DEBUG
#define D(x...) fprintf(stderr, x)
#else
#define D(x...)
#endif

#define MOD 1000000009

int n, w, b;
int c[4005][4005];

int p(int n, int k) {
    if (k > n || k < 1) return 0;
    else return c[n-1][k-1];
}

int main(int argc, char *argv[]) {
    int i, j;

    scanf("%d %d %d", &n, &w, &b);

    for (i = 0; i < 4005; i++) c[i][0] = 1;
    for (i = 1; i < 4005; i++)
        for (j = 1; j <= i; j++)
            c[i][j] = (c[i-1][j-1] + c[i-1][j]) % MOD;

    long long res = 0;

    for (i = 0; i <= n; i++) {
        res = (res + (((((long long)p(b, i) * (long long)p(w, n-i))%MOD) * (long long)(n-i-1))%MOD)) % MOD;
    }

    for (i = 1; i <= w; i++) res = (res * i) % MOD;
    for (i = 1; i <= b; i++) res = (res * i) % MOD;

    printf("%d\n", (int)res);

    return 0;
}

