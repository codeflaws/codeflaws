#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int g[6][6];
int x[6];
int tt[6];
int n = 5;
int res = 0;

void attempt(int);
void check();

int main(int argc, char *argv[]) {
    //freopen("input.txt", "r", stdin);
    int i, j;
    for(i = 1; i <= n; ++i)
    for(j = 1; j <= n; ++j)
        scanf("%d", &g[i][j]);
    memset(tt, 1, sizeof(tt));
    attempt(1);
    printf("%d", res);
}

void attempt(int i) {
    if (i > n) {
        check();
        return;
    }
    int j;
    for(j = 1; j <= n; ++j)
    if (tt[j]) {
        x[i] = j;
        tt[j] = 0;
        attempt(i+1);
        tt[j] = 1;
    }
}

void check() {
    int sum = 0;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = i; j <= n-1; j += 2)
            sum += g[x[j]][x[j+1]] + g[x[j+1]][x[j]];
    /*for(i = 1; i <= n; i++)
        printf("%d ", x[i]);
    printf(" %d\n", sum);
    sum += g[x[1]][x[2]] + g[x[2]][x[1]] + g[x[3]][x[4]] + g[x[4]][x[3]];
    sum += g[x[2]][x[3]] + g[x[3]][x[2]] + g[x[4]][x[5]] + g[x[5]][x[4]];
    sum += g[x[3]][x[4]] + g[x[4]][x[3]];
    sum += g[x[4]][x[5]] + g[x[5]][x[4]];*/
    if (sum > res) res = sum;
}
