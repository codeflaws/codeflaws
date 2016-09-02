#include <stdio.h>


int ok(long long n){
    if (n < 0) n = -n;
    while (n > 0){
        if (n % 10 == 8) return 1;
        n = n / 10;
    }
    return 0;
}



int main(int argc, char *argv[]){
    long long n;
    int i;
    scanf("%lld", &n);
    for (i = 1; i <= 100; i++){
        n += 1;
        if (ok(n)){ printf("%d", i); break;}
    }
    return 0;
}
