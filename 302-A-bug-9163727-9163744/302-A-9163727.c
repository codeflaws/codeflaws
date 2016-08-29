#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, n, m, a, l, r, c[2] = {0, 0};
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        c[(a + 1) / 2]++;
    }
    for (i = 0; i < m; i++) {
        scanf("%d %d", &l, &r);
        printf("%d\n", (r - l) % 2 == 1 && c[0] >= (r - l + 1) / 2 && c[1] >= (r - 1 + 1) / 2);
    }
    return 0;
}