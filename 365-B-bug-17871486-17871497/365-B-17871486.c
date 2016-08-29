#include <stdio.h>
#include <string.h>

int a[110];
int n;
int count;

int visit(int i)
{
    if (a[i] == (a[i-1] + a[i-2]))
        return 1;
    return 0;
}

int main(int argc, char *argv[])
{
    int i, j, k;

    memset(a, 0, sizeof(a));

    scanf("%d\n", &n);
    for (i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    if (n <= 2) {
        printf("%d\n", n);
        return 0;
    }

    for (i=3, k=2, count=2; i<=n; i++) {
        j = visit(i);
        if (j == 1)
            count++;
        if (k < count)
            k = count;
        if (j == 0) {
            count = 2;
        }
    }
    printf("%d\n", k);

    return 0;
}
