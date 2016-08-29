#include <stdio.h>

int cmpfun(const void*a, const void*b)
{
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[])
{
    int a[3001], b[3001], i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmpfun);
    for(i=0; i<3001; i++)
        b[i]=i+1;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            printf("%d\n", b[i]);
            break;
        }
    }
    return 0;
}