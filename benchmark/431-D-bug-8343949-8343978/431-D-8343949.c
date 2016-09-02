#include <stdio.h>

typedef long long int ll;

ll C[65][65];

void binomial() {
    int i, j;
    C[0][0] = 1;
    for(i = 1; i <= 64; i++) {
        C[i][0] = C[i][i] = 1;
        for(j = 1; j < i; j++)
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
    }
}

ll F(ll num, int p) {
    if(p == 0) return num >= 0;
    int bits = -1;
    ll r = 1;
    while((r - 1) <= num) {
        r = r * 2;
        bits++;
    }
    if(bits < p) return 0;
    return C[bits][p] + F(num - r / 2, p - 1);
}

int main(int argc, char *argv[]) {
    ll m, lo = 0, hi = (ll)2e18, mid, n = 0;
    int k;
    scanf("%lld %d", &m, &k);
    binomial();
    while(lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if((F(2 * mid, k) - F(mid, k)) >= m) {
            n = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    printf("%lld\n", n);
    return 0;
}
