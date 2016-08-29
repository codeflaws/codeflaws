#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAXN 100000

struct Angle {
    long double val;
    int ind;
};

typedef struct Angle Angle;

int compare(const void *s, const void *t) {
    return ((Angle*)s)->val > ((Angle*)t)->val ? 1 : -1;
}


int main(int argc, char *argv[]) {
    int n, x, y;
    Angle angle[MAXN];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &x, &y);
        angle[i].ind = i+1;
        angle[i].val = acosl(x/sqrt(x*x+y*y));
        if (y < 0) angle[i].val = -angle[i].val;
    }
    qsort(angle, n, sizeof(Angle), compare);
    int a = angle[n-1].ind, b = angle[0].ind;
    long double min = 2*acos(-1.0) - (angle[n-1].val - angle[0].val);
    for (int i = 0; i < n-1; ++i) {
        if (angle[i+1].val - angle[i].val < min) {
            min = angle[i+1].val - angle[i].val;
            a = angle[i].ind;
            b = angle[i+1].ind;
        }
    }
    printf("%d %d\n", a, b);
}