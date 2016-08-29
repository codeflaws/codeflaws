#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main(int argc, char *argv[])
{
    int n,k,a[55],i;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(a[0]),cmp);
        printf("%d %d",a[n-k],a[n-k]);
    }
    return 0;
}
