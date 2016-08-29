#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int main(int argc, char *argv[])
{
    int n,a[100010],b[100010],c[100010],i,r,l,max;
    while(scanf("%d",&n)!=EOF)
    {
        l=0;r=0;max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
            max=a[i];
        }
        memset(b,0,sizeof(b[0]));
        qsort(a,n,sizeof(a[0]),cmp);
        for(i=0;i<n;i++)
        {
            if(a[i]==max)
            break;
            if(i%2==0)
            {
                b[l++]=a[i];
            }
            else
            {
                c[r++]=a[i];
            }
        }
        printf("%d\n",r+l+1);
        for(i=0;i<l;i++)
        printf("%d ",b[i]);
        printf("%d",max);
        for(i=r-1;i>=0;i--)
        printf(" %d",c[i]);
        printf("\n");
    }
    return 0;
}
