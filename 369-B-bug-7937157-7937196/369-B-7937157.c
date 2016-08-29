#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,k,l,r,sk, sall;
    int a[1001];
    int i, j;

    scanf("%d %d %d %d %d %d", &n, &k, &l, &r, &sall, &sk);
    int ss = sall-sk;
    for (i = 0; i < k; i++) {
        a[i] = sk/k;
    }
    i = 0;
    sk = sk - (sk/k)*k;
    while (sk > 0) {
        a[i]++;
        i++;
        sk--;
    }
    for (i = k; i < n; i++) {
        a[i] = ss/(n-k);
    }
    i = k;
    ss = ss - (ss/(n-k))*(n-k);
    while (ss > 0) {
        a[i]++;
        i++;
        ss--;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
