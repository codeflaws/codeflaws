#include <stdio.h>

int main(int argc, char *argv[]) {
    long n, k, lim, j, i = 0;
    scanf("%ld %ld", &n, &k);
    lim = k;

    if (n > 2 * k) {
        printf("%ld", n * k);
        while (i < n) {
            j = ++i;
            while (j <= lim) {
                printf("%ld %ld\n", i, j % n + 1);
                ++j;
            }
            ++lim;
        }
    }
    else {
        printf("%d", -1);
    }

    return 0;
}