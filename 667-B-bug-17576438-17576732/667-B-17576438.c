#include <stdio.h>
#include <stdlib.h>


int comp(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), comp);

    long long a = arr[0], b = 0;

    for (int i = 1; i < n; i++) {
        b += arr[i];
    }

    long long max = (a > b) ? a : b;
    long long min = (a == max) ? b : a;

    printf("%I64", max - min + 1);
    free(arr);
}


