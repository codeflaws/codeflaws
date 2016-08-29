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
    freopen("in", "r", stdin);
    int n, i, x;
    scanf("%d", &n);
    int neg = 0, s = 0;
    int abs_min = 9999;
    for (i = 2 * n - 1; i--;) {
        scanf("%d", &x);
        neg += x < 0;
        int abs_x = abs(x);
        s += abs_x;
        if (abs_x < abs_min) {
            abs_min = abs_x;
        }
    }
    // printf("n %d neg %d\n", n, neg);
    if (neg % 2 && n % 2 == 0) {
        s -= 2 * abs_min;
    }
    printf("%d\n", s);
    return 0;
}
