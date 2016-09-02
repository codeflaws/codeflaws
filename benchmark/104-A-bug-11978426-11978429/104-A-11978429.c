#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, ans = 4, i, j, k;

    scanf("%d", &n);

    if (n <= 10 || n >= 22) ans = 0;

    if (n == 20) ans = 15;

    printf("%d", ans);

    return 0;
}
