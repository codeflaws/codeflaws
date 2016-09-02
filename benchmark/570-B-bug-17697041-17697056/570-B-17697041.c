#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long n, m;
    scanf("%ld %ld", &n, &m);
    printf("%ld\n",(m > n/2)?m-1:m+1);
    return 0;
}
