#include<stdio.h>
#include<stdlib.h>

int a[100001];

int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[])
{
    int n, i, s = 0, r = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++) scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmpfunc);

    for(i=0; i<n; i++){
        if(s <= a[i]){
            r++;
        }
        s = s + a[i];
    }

    printf("%d\n", r);

    return 0;
}
