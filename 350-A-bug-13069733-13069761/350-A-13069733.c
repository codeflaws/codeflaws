#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 1; j < n - i; j++)
            if (a[j - 1] > a[j])
            {
                a[j - 1] += a[j];
                a[j] = a[j - 1] - a[j];
                a[j - 1] -= a[j];
            }
    for (i = 0; i < m - 1; i++)
        for (j = 1; j < m - i; j++)
            if (b[j - 1] > b[j])
            {
                b[j - 1] += b[j];
                b[j] = b[j - 1] - b[j];
                b[j - 1] -= b[j];
            }
    if (b[0] > a[n - 1] && a[n - 1] >= a[0] * 2)
        printf("%d", a[n - 1]);
    else if (a[0] * 2 < b[0])
        printf("%d", a[0] * 2);
    else
        printf("%d", -1);
    return 0;
}
