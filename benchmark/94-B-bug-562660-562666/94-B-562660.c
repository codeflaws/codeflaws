#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int m;
    int i, j, k;
    int a, b;
    int map[11][11];
    while (scanf("%d", &m) == 1 && m) {
        memset(map, 0, sizeof(map));
        for (i = 0; i < m; i++) {
            scanf("%d%d", &a, &b);
            map[a][b] = map[b][a] = 1;
        }
        for (i = 1; i <= 5; i++) {
        for (j = i+1; j <= 5; j++) {
        for (k = j+1; k <= 5; k++) {
            if (map[i][j] && map[j][k] && map[k][i]) {
                printf("WIN\n");
                goto X;
            }
            if (!map[i][j] && !map[j][k] && !map[k][i]) {
                printf("WIN\n");
                goto X;
            }
        }
        }
        }
        printf("FAIL\n");
X: ;
    }
    return 0;
}