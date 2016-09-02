#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pi 3.1415926


int main(int argc, char *argv[])
{
    long long int n;
    scanf("%lld", &n);

    long long int results;

    if (!n)
    {
        printf("1"); return 0;
    }
    if (n<13)
    {
        results = 1LL<<n;
    }
    else
    {
        results = ((1LL<<13) - 100)<<(n-13);
    }

    printf("%lld",results);

    return 0;
}
