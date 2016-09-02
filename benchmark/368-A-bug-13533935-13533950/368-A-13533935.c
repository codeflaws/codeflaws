#include<stdio.h>
int comp(const void* a, const void* b)
{
    return *(int *)a - *(int *)b;
}
int main(int argc, char *argv[])
{
    int n,d;
    scanf("%d %d",&n,&d);
    int *arr=(int *)malloc(sizeof(int)*n);
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    qsort(sum,arr,sizeof(int),comp);
    int m,ans=0;
    scanf("%d",&m);
    if(m>n)
        ans=sum-((m-n)*d);
    else
    {
        for(i=0;i<m;i++)
        {
            ans+=arr[i];
        }
    }
    printf("%d\n",ans);

    return 0;
}
