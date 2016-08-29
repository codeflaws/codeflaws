#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, m, a[200], i, j = 0;
    scanf("%d %d\n", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d\n", &a[2*i], &a[2*i+1]);
    }
    for (i = 0; i < m; i++) {
        if (j == a[2*i]) {
            int k = 1;
            while (j == a[2*i] && i < m) {
                i++; k++;
            }
            printf("%d %d\n", j, k);
            return 0;
        } else if (j + 1 != a[2*i]) {
            printf("%d 0\n", j+1);
            return 0;
        }
        j = a[2*i+1];
    }
    if (j == n) puts("OK");
    else printf("%d 0\n", j);
    return 0;
}
