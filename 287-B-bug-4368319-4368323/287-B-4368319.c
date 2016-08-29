#include <stdio.h>

typedef long long LL;
LL highval(LL k, int digits) {
    /*
    LL sum = 0;
    int i;
    for (i = 0; i < digits; i++) {
        sum += k-i;
    }
    */
    LL sum = (k*(k+1) - (k-digits)*(k-digits+1))/2;
    return sum-digits+1;
}

//LL lowval(LL k, int digits) {
LL lowval(int digits) {
    /*
    LL sum = 0;
    int i;
    for (i = 0; i < digits; i++) {
        sum += i+2;
    }
    */
    LL sum = (digits+1)*(digits+2)/2 - 1;
    return sum-digits+1;
}

LL cal(LL val, LL k) {
    int lo=0, hi=k; //val = [2..k]
    while (hi-lo > 1) {
    //printf("SHIT\n");
    //printf("%d %d\n", lo, hi);
        int mid = (hi+lo)/2;
        LL u = highval(k, mid);
        if (val > u)
            lo = mid;
        else
            hi = mid;
    }
    return (val >= lowval(hi) && val <= highval(k, hi)) ? hi : -1;
}

int main(int argc, char *argv[]) {
    LL n, k;
    scanf("%lld %lld", &n, &k);
    printf("%lld\n", cal(n, k));
    return 0;
}
