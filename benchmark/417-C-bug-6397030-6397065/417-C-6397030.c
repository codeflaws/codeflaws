#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    if((n+1)/2<=k)
    {
        printf("-1");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=(i+k);j++)
        {
            if(j<=n)
               printf("%d %d\n",i,j);
            else
               printf("%d %d\n",i,j%n);
        }

    }
    return 0;
}
