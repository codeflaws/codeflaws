
#include<stdio.h>
int a[105],n,l[101],r[101],i,j,count=0;
int main(int argc, char *argv[])
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&r[i]);
        if(i>0)
        {
            for(j=l[i]+1;j<=r[i];j++)
            {
                a[j]=1;
            }
        }
    }
    for(i=l[0]+1;i<=r[0];i++)
    {
        if(a[i]==0)
            count++;
    }
    printf("%d",count);

return 0;
}
