#include <stdio.h>
#include <stdlib.h>

int compute(int *a, int *b, const int l, const int r) {
    int i, a_or, b_or;
    printf("%d %d\n", l, r);
    a_or = a[l];
    b_or = b[l];

    for(i = l + 1; i <= r; i++) {
        a_or |= a[i];
        b_or |= b[i];
    }

    return (a_or + b_or);
}

int main(int argc, char *argv[]) {
    int *a, *b, n, i, l, r, max;
    max = 0;

    scanf("%d", &n);

    a = (int *) calloc(n, sizeof(int));
    b = (int *) calloc(n, sizeof(int));

    for(i = 0; i < n; i++) { scanf("%d", &a[i]); }
    for(i = 0; i < n; i++) { scanf("%d", &b[i]); }

    for(l = 0; l < n; l++) {
        for(r = l; r < n; r++) {
            if(compute(a, b, l, r) > max) {
                max = compute(a, b, l, r);
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
