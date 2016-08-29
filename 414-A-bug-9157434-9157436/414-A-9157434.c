#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, n, k, d;
    scanf("%d %d", &n, &k);
    if (n == 1) {
        printf("%d", k == 0 ? 1 : -1);
    } else if (k == 0 || d < 0) {
        puts("-1");
    } else {
        d = k - n / 2;
        if (d > 0) {
            printf("%d %d ", (d + 1), (d + 1) * 2);
            n -= 2;
        }
        for (i = 0; i < n; i++)
            printf("%d ", 1000000000 - i);
    }
    return 0;
}