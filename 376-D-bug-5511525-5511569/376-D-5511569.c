#include <stdio.h>

char mat[5005][5005];
int max[5005][5005];
int col[5005];

int main(int argc, char *argv[]) {
    int n, m;
    int i, j;
    int res;
    int aux;

    scanf(" %d %d", &n, &m);

    for (i = 1; i <= m; i++) {
        col[i] = 0;
    }

    while((getchar()) != '\n') {
        ;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            mat[i][j] = getchar();
        }
        while((getchar()) != '\n') {
            ;
        }
    }

    for (i = 1; i <= n; i++) {
        /*printf("mat[i][m] = %c\n", mat[i][m]);
        printf("i = %d\n", i); */
        if (mat[i][m] == '1') {
            max[i][m] = 1;
        }
        for (j = m - 1; j >= 1; j--) {
            /*printf("i = %d, j = %d\n", i, j); */
            if (mat[i][j] == '1') {
                max[i][j] = 1 + max[i][j + 1];
            } else {
                max[i][j] = 0;
            }
        }
    }

    /*printf("max\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            printf("%d", max[i][j]);
        }
        printf("\n");
    } */

    res = 0;
    for (j = 1; j <= m; j++) {
        for (i = 1; i <= m; i++) {
            col[i] = 0;
        }
        for (i = 1; i <= n; i++) {
            col[max[i][j]]++;
        }
        /*printf("col\n");
        for (i = 1; i <= n; i++) {
            printf("%d\n", col[i]);
        } */
        for (i = m; i >= 0; i--) {
            aux = col[i] * i;
            if (aux > res) {
                res = aux;
            }
            col[i - 1] += col[i];
        }
    }

    printf("%d\n", res);

    return 0;
}
