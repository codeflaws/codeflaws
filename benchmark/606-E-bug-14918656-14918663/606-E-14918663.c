#include <stdio.h>
#define MAXH 100010

int n, q, p;
int a[MAXH];
int b[MAXH];
int max;
double ans;
typedef long double ld;

ld f(ld x) {
    int i;

    ld y = 1;
    for(i = 0;i < n;i ++) {
        if((1 - x * a[i]) / b[i] < y) {
            y = (1 - x * a[i]) / b[i];
        }
    }
    return p * x + q * y;
}

int main(int argc, char *argv[]) {
    int i;

    scanf("%d %d %d", &n, &p, &q);
    max = 0;
    for (i = 0;i < n;i ++) {
        scanf("%d %d", a + i, b + i);
        if(a[i] > max) max = a[i];
    }
    ld l = 0;
    ld r = 1.0 / max;
    ld tl, tr;
    for (i = 0;i < 200;i ++) {
        tl = (2 * l + r) / 3;
        tr = (2 * r + l) / 3;
        if (f(tl) > f(tr)) {
            r = tr;
        } else {
            l = tl;
        }
    }
    printf("%.15f\n", (double)f((l+r)/2));
    return 0;
}
