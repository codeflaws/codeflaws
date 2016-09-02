#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}



int main(int argc, char *argv[])
{

    double PI  = 3.1415926536;
    int i,n;
    double tmp=0.0000000000000;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
     qsort(arr, n, sizeof(int), cmpfunc);

    for(i=n-1;i>=0;i--)
    {
        if(i%2==0)
            tmp+= PI*arr[i]*arr[i];
        else
            tmp-=PI*arr[i]*arr[i];

    }

    printf("%.10f",tmp);
    return 0;
}
