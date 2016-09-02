#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long int k, n, b, t, x, second, counter;
    scanf("%lld",&k);scanf("%lld",&b);scanf("%lld",&n);scanf("%lld",&t);
    counter = 0;second = 0;x = 1;
    while(x <= t){
        x = k * x + b;
        counter ++;
    }
    if(counter != 0){
    second = n - counter + 1;
    }
    else{
        second = n;
    }
    if(second > 0){
    printf("%lld",second);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
