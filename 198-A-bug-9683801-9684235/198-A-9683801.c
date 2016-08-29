#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned long x = 1, k, b, n, t, i;
    scanf("%ld %ld %ld %ld", &k, &b, &n, &t);
    for (i = 0; i < n; i++)
    {
        x = (k * x) + b;
        if (x >= t)
        {
            break;
        }
    }
    printf("%ld", n - i);
    return 0;
}
