#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, i = 1, ans = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 10 == 4)
            ans += i;
        else
            ans += 2 * i;
        i *= 2;
        n /= 10;
    }
    printf("%d", ans);

}