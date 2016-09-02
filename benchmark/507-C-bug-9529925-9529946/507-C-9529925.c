#include <inttypes.h>
#include <inttypes.h>
#include <inttypes.h>
#include<stdio.h>
#include<math.h>
int64_t a[100];
int64_t f(int64_t h, int64_t n){
    if(h == 0) return 0;
    if(h == 1 && n == 1) return 1;
    if(h == 1 && n == 2) return 2;
    if( n - pow(2, h - 1) < 1e-8 ) return f(h - 1, pow(2, h - 1) - n + 1) + 1;
    else return a[h] + 1 + f(h - 1, n - (pow(2, h - 1)) );
}
int main(int argc, char *argv[]){
    int64_t h, n;
    int i;
    a[1] = 1;
    for(i = 2; i <= 55; i ++){
        a[i] = a[i - 1] + pow(2, i - 1);
    }
    printf("%lld\n",a[2]);
    while(scanf("%lld%lld", &h, &n) != EOF){
        printf("%lld\n", f(h, n));
    }
    return 0;
}
