#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, m, i, j, cur;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            scanf("%d", &cur);
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                putchar('2');
                return 0;
            }
        }
    putchar('4');
    return 0;
}