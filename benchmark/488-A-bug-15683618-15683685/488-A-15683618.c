#include <stdio.h>

int isContainEight(long long n){
    while(n!=0){
        if(n%10==8) return 1;
        n /= 10;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    long long initial,n;
    scanf("%lld",&initial);
    n=initial;
    while(1){
        if(isContainEight(++n)) break;
    }
    printf("%lld",n-initial);

return 0;
}
