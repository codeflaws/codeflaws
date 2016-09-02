#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char from_grid[100][100];
    char to_grid[100][100];
    int n, m;
    int i, j, k;
    int flag;

    scanf("%d%d", &n, &m);
    printf("%d %d\n", n, m);

    memset(from_grid, 0, sizeof(from_grid));
    memset(to_grid, 0, sizeof(to_grid));

    getchar();
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j)
            from_grid[i][j] = getchar();
        getchar();
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            flag = 0;
            for (k = 0; k < m; ++k) {
                if (flag != 0 || 
                    (k != j && from_grid[i][j] == from_grid[i][k])) {
                    flag = 1;
                    break;
                }
            }
            for (k = 0; k < n; ++k) {
                if (flag != 0 ||
                    (k != i && from_grid[i][j] == from_grid[k][j])) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                to_grid[i][j] = from_grid[i][j];
            else
                to_grid[i][j] = 0;
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            if (to_grid[i][j])
                printf("%c", to_grid[i][j]);
        }
    }
    printf("\n");

    return 0;
}
