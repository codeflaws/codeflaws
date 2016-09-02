#include<stdio.h>
int comparator(const void* a, const void* b)
{
    return (*(int *)a - *(int *)b);
}
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),comparator);
    int cum=arr[0];
    int happy=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>=cum)
            happy++;
        cum+=arr[i];

    }
    printf("%d",happy);
    return 0;
}
