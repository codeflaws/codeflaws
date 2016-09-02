#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned long long int k, n, d, m, l, bobcrd = 0;
    scanf("%llu %llu %llu %llu", &n, &d, &m, &l);
    k = 1;
    while(k < n){
        bobcrd += (((k-1)*m+l-bobcrd)/d)*d;
        if(bobcrd <= ((k-1)*m+l))
            bobcrd += d;
        k += (bobcrd - (k-1)*m)/m;
        if((k-1)*m+l<=bobcrd)
            k++;
        if(bobcrd<(k-1)*m){
            printf("%llu", bobcrd);
            return 0;
        }
    }
    bobcrd += (((k-1)*m+l-bobcrd)/d)*d;
    if(bobcrd <= ((k-1)*m+l))
        bobcrd += d;
    printf("%llu", bobcrd);
    return 0;
}
