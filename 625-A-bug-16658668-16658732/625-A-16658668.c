#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    long long a,b,c,n,diff,cnt=0;
    scanf("%lld",&n);
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&c);
    diff = b-c;
    if(a < diff)
        printf("%lld",n/a);
    else{
        if(n>b){
            cnt = (n-b)/diff+1;
            n-=diff*cnt;
        }
        cnt+=n/a;
        printf("%lld",cnt);
    }
    return 0;
}


