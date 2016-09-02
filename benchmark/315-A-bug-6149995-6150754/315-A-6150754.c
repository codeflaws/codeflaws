#include<stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int i,a[n],b[n],t,j,ans=n;
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++)
    {
        t=b[i];
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                if(a[j]==t)
                {
                    ans--;
                    a[j]=0;
                }
            }
        }
    }
    printf("%d",ans);

    return 0;
}
