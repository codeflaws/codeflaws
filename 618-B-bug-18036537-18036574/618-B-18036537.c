#include<stdio.h>

int main(int argc, char *argv[])
{
    int a[51]={0};
    int b[51]={0};
    int max;
    int n,i,j,k=0;
    int x;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        max=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&x);
            if(j==1){max=x;}
            if(x>max){max=x;}
        }

        for(k=0;k<=5;k++)
        {
            if(max==b[k]) max++;
        }
        b[i]=max;

    }

    for(i=1;i<=n;i++)
    {
        printf("%d ",b[i]);
    }

return 0;
}
