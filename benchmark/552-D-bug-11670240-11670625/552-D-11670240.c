#include<stdio.h>
int x[2001],y[2001];
int main(int argc, char *argv[])
{
    int n,i,j,ans=0,k;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d%d",x+i,y+i);
    for(i=0;i<n-2;++i)
    {
        for(j=i+1;j<n-1;++j)
        {
            for(k=j+1;k<n;++k)
            {
                if((x[j]-x[k])*(y[k]-y[i])!=(y[j]-y[k]*(x[k]-x[i])))
                    ++ans;
            }
        }
    }
    printf("%d",ans);
    return 0;
}