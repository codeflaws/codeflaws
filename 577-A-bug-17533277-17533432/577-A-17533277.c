#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long n, x, i, sum = 0;
    scanf("%ld %ld", &n, &x);
    for (i = 1; i <= n; i++)
        if ((x % i == 0) && (x/i <= x)) sum++;
    printf("%ld\n", sum);
    return 0;
}
