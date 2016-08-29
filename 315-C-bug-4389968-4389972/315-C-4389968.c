#include <stdio.h>

long long int i, n,k, l1,l2, n2,i2, a;

int main(int argc, char *argv[]){

    scanf("%lld%lld", &n, &k);

    n2 = n;
    i2 = 1LL;
    for(i=1; i<=n ; i++){
        scanf("%lld", a);
        l2 = ((n2-i2)*a)*(i2-1LL);
        if( (l1-l2) < k){
            printf("%lld\n", i);
            n2--;
        }
        else {
            l1 += a*(i2-1LL);
            i2++;
        }
    }

    return 0;
}
