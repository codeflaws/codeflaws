#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main(int argc, char *argv[])
{
    int n,a[55],m,b[55],i,c[55],k,sum,j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        scanf("%d",&b[i]);
        for(i=0,k=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(b[j]%a[i]==0)
                {
                    c[k]=b[j]/a[i];
                    k++;
                }
            }
        }
        qsort(c,k,sizeof(c[0]),cmp);
        j=c[0];
        sum=1;
        for(i=1;i<k;i++)
        {
            if(c[i]==j)
            sum++;
        }
        printf("%d\n",sum);

    }
    return 0;
}
