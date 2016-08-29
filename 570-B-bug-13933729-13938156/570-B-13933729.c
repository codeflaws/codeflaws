#include <stdio.h>

int main(int argc, char *argv[])
{
    int m,n;scanf("%d%d",&n,&m);
    if(n%2==1 && m*2-1==n)
    {printf("%d",m-1);}
    else if(n%2==1 && m*2-1>n)
    {printf("%d",m-1);}
    else if(n%2==1)
    {printf("%d",m+1);}
    else printf("%d",m*2<=n?m+1:m-1);
    
    return 0;
}