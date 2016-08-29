#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
    int i, j, n, m, k;
    int a[11], b[11], c[11], d[11];
    int da[1001][11];
    scanf("%d%d%d%d", &n, &m, &c[0], &d[0]);
    a[0] = 1000;
    b[0] = 1;
    for (i = 1; i <= m; i++){
        scanf("%d%d%d%d", a + i, b + i, c + i, d + i);
        da[0][i] = 0;
    }
    for(i = 1; i <= n; i++){
        for(j = 0; j <= m; j++){
            da[i][j] = 0;
            for(k = 0; k <= a[j]/b[j] && c[j] * k <= i; k++){
                da[i][j] = fmax(da[i][j], da[i - c[j] * k][j - 1] + d[j] * k);
            }

        }
    }

    printf("%d", da[n][m]);

    return 0;
}

