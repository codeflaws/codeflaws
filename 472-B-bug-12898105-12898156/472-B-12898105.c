#include<stdio.h>
int comparator(const void* a,const void *b)
{
    return (*(int *)b-*(int*)a);
}
int main(int argc, char *argv[])
{
    int n,k;
    scanf("%d %d",&n,&k);
    int *arr=(int *)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),comparator);
    int l=0;
    int ans=0;
    while(l+k-1<n)
    {
        ans+=2*(arr[l]-1);
        l=l+k;
        //printf("%d\n",ans);
    }
    if(l != n)
        ans+=(2*(arr[n-1]-1));
    printf("%d",ans);
    return 0;
}
