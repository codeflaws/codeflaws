#include <stdio.h>
#include <stdlib.h>

#define MAX 200

typedef struct {
    long long a, b;
} warehouse;

int cmp (const void *a, const void *b) {
    warehouse *x = (warehouse *)a, *y = (warehouse *)b;

    return y->b - x->b;
}
int main(int argc, char *argv[]) {
    long long int n, m, i, j;
    warehouse container[MAX + 1];
    long long max = 0, tmp;

    scanf ("%lld %lld", &n, &m);

    for (i = 0; i < m; i++)
        scanf("%lld %lld", &container[i].a, &container[i].b);

    qsort (container, m, sizeof (warehouse), cmp);

    for (i = 0, j = 0; i != n; j++) {
        if ((n - i) > container[j].a)
            tmp = container[j].a;
        else
            tmp = (n - i);

        i += tmp;
        max += container[j].b * tmp;
    }

    printf("%lld\n", max);
    return 0;
    
}