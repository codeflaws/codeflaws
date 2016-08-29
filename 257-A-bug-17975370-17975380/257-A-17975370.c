#include <stdio.h>

int compare(const void*a, const void*b)
{
    return (*(int*)a-*(int*)b);
}

int main(int argc, char *argv[])
{
    int j, n, m, k, a[52], i, filter=0, b[51];
    scanf("%d %d %d", &n, &m, &k);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), compare);
    for(i=0; i<n; i++)
    {
        b[n-i-1]=a[i];
    }

    for(i=0; i<n; i++)
    {
        filter=0;
        for(j=0; j<i; j++)
        {
            filter+=b[j];
            //printf("filter=%d i=%d\n", filter, i);
        }
        //printf("\n");
        if(i+m-filter<=k)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}