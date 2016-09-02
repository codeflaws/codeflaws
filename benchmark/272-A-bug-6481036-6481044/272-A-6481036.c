#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,t,su,cnt=0,sum=0,j,i,ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        sum=sum+t;
    }
    for(j=1;j<=5;j++)
    {
        ch=sum+j;
        if(ch%(n+1)==0)
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}