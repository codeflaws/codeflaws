#include <stdio.h>

int main(int argc, char *argv[]) {
    int t,n,p,a[25][25],i,j,count=0,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&p);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                a[i][j]=0;
            }
        }
        for(k=2;k<=n;k++)
        {
            for(i=1;i<k;i++)
            {
                if(count<(2*k+p))
                {
                    a[i][k]=1;
                    count++;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==1)
                {
                    printf("%d %d\n",i,j);
                }
                
            }
        }
    }
    return 0;
}
