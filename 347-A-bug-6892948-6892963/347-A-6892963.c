#include <stdio.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(int argc, char *argv[]) {
    int i;
    int n, a[100], min, minIdx, max, maxIdx;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", a + i);

    min = 1001;
    max = -1001;
    for (i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
            minIdx = i;
        }
        if (max < a[i]) {
            max = a[i];
            maxIdx = i;
        }
    }

    if (minIdx == 0)
        minIdx = maxIdx;

    a[maxIdx] = a[0];
    a[0] = max;

    a[minIdx] = a[n - 1];
    a[n - 1] = min;

    qsort(a + 1, n - 2, sizeof(int), &compare);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
