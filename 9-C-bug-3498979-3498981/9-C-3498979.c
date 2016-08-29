#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, i, k, p = 1, ans = 0;
    scanf("%d", &n);
    for(k = 0; n >= p; k++, p *= 10);
    for(i = k-1; i >= 0; i--) {
        p /= 10;
        if(n/p > 1) {
            ans += (1<<(i+1)) - 1;
            break;
        } else {
            ans += (1<<i)*(n/p);
        }
        n %= p;
    }
    printf("%d\n", ans);

}
