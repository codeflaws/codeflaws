#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[])
{
    int n, i; long m;
    scanf("%d %ld", &n, &m);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmpfunc);
    i = n-1;
    while (m > 0){
        m -= arr[i--];
    }
    printf("%d\n", n - (i + 1));
    return 0;
}
