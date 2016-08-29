#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define NMAX 51

int cmp(const void *a, const void *b) {
    return ((*(int *)a) - (*(int *)b));
}

int main(int argc, char *argv[]) {
    int n, m;
    int values[NMAX];
    int i;

    scanf("%d %d", &n, &m);

    for(i = 0;i < m;i++) {
        scanf("%d", &values[i]);
    }

    qsort(values, m, sizeof(int), cmp);

    int min_diff = INT_MAX;
    for(i = 0;i < m - n;i++)
        if(values[i + (n - 1)] - values[i] < min_diff)
            min_diff = values[i + (n - 1)] - values[i];
    printf("%d", min_diff);
    return 0;
}
