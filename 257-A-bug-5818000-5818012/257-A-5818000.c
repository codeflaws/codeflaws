#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}
int main(int argc, char *argv[])
{
    int n,m,k,i,sum,a[55],max;
    while(scanf("%d%d%d",&n,&m,&k)!=EOF)
    {
        sum=0;max=k;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(a[0]),cmp);
        for(i=0;i<n;i++)
        {
            if(max>=m)
            {
                break;
            }
            else
            {
                sum++;
                max--;
                max+=a[i];
            }
        }
        if(i!=n)
        printf("%d\n",sum);
        else
        printf("-1\n");
    }
    return 0;
}
