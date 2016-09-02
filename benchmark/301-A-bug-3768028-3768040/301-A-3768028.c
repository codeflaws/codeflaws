#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#define ARRAY_SIZEOF(a) (sizeof(a) / sizeof(a[0]))
#define ZERO(p, n)      memset(p, 0, n);

typedef long long int lli;

int main(int argc, char *argv[])
{
    // freopen("in", "r", stdin);
    int n, i, xs[201];
    scanf("%d", &n);
    int xs_n = 2 * n - 1;
    for (i = 0; i < xs_n; i++) {
        scanf("%d", &xs[i]);
    }
    int neg = 0, s = 0;
    int abs_min = 9999;
    for (i = 0; i < xs_n; i++) {
        neg += xs[i] < 0;
        int abs_i = abs(xs[i]);
        s += abs_i;
        if (abs_i < abs_min) {
            abs_min = abs_i;
        }
    }
    if (neg % 2 && neg % n % 2 && (n - neg) % n) {
        s -= 2 * abs_min;
    }
    printf("%d\n", s);
    return 0;
}
