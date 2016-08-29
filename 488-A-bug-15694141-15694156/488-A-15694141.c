#include <stdio.h>
#include <stdlib.h>

#define min(a,b) a < b ? a : b
#define max(a,b) a > b ? a : b
#define for(k,i,n) for(int k = i; j < n; j++)

long long a,ans;

int f(long long a){
    if(a < 0)
        a = -a;
        while(a > 0){
            if(a % 10 == 8)
                return 1;
            a /= 10;
        }
    return 0;
}

int main(int argc, char *argv[]) {
    scanf("%lld",&a);
    ans = 1;
    a++;

    while(f(a) != 8){
         ans++;
         a++;
    }

    printf("%lld\n",ans);
    return 0;
}
