#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,k;
    scanf("%d%d",&n,&k);
    for(i=n;i>n-k;i--)
    {
        printf("%d",i);
    }
    for(i=1;i<=n-k;i++)
    {
        printf("%d ",i);
    }
    return(0);
}

