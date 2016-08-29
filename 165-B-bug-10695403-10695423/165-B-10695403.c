#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long n ;
    int k , flag = 1 ;
    scanf("%lld %d", &n , &k) ;
    long long v = n / k ;
    while (flag)
    {
        long long sum = v ;
        long long term = v / k ;
        while (term > 0)
        {
            sum += term ;
            term /= k ;
        }
        if (sum >= n)
        {
            break ;
        }
        v++ ;
    }
    printf("%lld", v) ;
    return 0;
}
