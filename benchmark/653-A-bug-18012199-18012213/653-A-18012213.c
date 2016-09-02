#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void q_sort(int *a, int left, int right)
{
    int i, j, k, t;
    if (left < right) {
        i = k = left;
        j = right + 1;
        while (1) {
            while (a[++i] < a[k]);
            while (a[--j] > a[k]);
            if (i >= j) break;
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
        t = a[k];
        a[k] = a[j];
        a[j] = t;
        q_sort(a, left, j-1);
        q_sort(a, j+1, right);
    }
}

int visit(int *a, int i, int j)
{
    if (j>1 && (a[i] + 1) == a[i+1]) {
        //printf("%d -> %d\n", a[i], a[i+1]);
        return visit(a, i+1, j-1);
    } else if (j>1 && (a[i]) == a[i+1]) {
        return visit(a, i+1, j);
    }
    if (j == 1) return 1;
    return 0;
}
int main(int argc, char *argv[])
{
    int a[1000];
    int n;
    int i, j;
    
    memset(a, 0, sizeof(a));

    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    i = 0;
    q_sort(a, i, n-1);

#if 0
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
#endif

    for (i=0; i<(n-2); i++) {
        j = visit(a, i, 3);
        if (j) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");

    return 0;
}
