#include <stdio.h>

int main(int argc, char *argv[]){
    long long int k, b, n, t, z;
    scanf("%lld %lld %lld %lld", &k, &b, &n, &t);
    z = 1;
    z = k*z +b;
    while (n-- && t>z){
        z = k*z +b;
    }
    printf("%lld",++n);
    return 0;
}
