#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int i;
    int n, k, a[100];
    int cnt, min, max, minIdx[1000], maxIdx[1000];

    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", a + i);

    for (cnt = 0; ; cnt++) {
        min = INT_MAX;
        max = INT_MIN;
        for (i = 0; i < n; i++) {
            if (a[i] < min) {
                min = a[i];
                minIdx[cnt] = i;
            }
            if (a[i] > max) {
                max = a[i];
                maxIdx[cnt] = i;
            }
        }
        if (max - min <= 1)
            break;

        if (cnt == k)
            break;

        a[minIdx[cnt]]++;
        a[maxIdx[cnt]]--;
    }

    printf("%d %d\n", max - min, cnt);
    for (i = 0; i < cnt; i++)
        printf("%d %d\n", maxIdx[i] + 1, minIdx[i] + 1);

    return 0;
}
