#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long n, m;
    scanf("%ld %ld", &n, &m);
    printf("%ld\n", (((n+m)/3) <= n)?((n+m)/3):((((n+m)/3) <= m))?((n+m)/3):(n <= m)?n:m);
    return 0;
}
