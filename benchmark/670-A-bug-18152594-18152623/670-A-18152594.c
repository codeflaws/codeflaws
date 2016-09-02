#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long n;
    scanf("%ld", &n);
    printf("%ld ", n / 7 * 2);
    if (n % 7 == 0) printf("%ld\n", n / 7 * 2);
    else if (n % 7 == 1) printf("%ld\n", n / 7 * 2 + 1);
    else printf("%ld\n", n / 7 * 2 + 2);
    return 0;
}
