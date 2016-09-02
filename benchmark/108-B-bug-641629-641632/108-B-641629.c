#include <stdio.h>
#include <stdlib.h>

int a[100000];

int cmp(const void *a, const void *b)
{
    return (*((int *)a)) - (*((int *)b));
}

void func(int n)
{
    int i;
    qsort(a, n, sizeof(int), cmp);
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] * 2 > a[i + 1])
        {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main(int argc, char **argv)
{
    int n, i;
    while (scanf("%d", &n) == 1)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        func(n);
    }
    return 0;
}