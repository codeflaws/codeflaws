#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 1000000000
int n,m;
int main(int argc, char *argv[])
{
    int i,x;
    srand(time(0));
    scanf("%d%d",&n,&m);
    x = n>>1;
    if(!x)
    {
        if(!n) printf("1");
        else printf("-1");
    }
    else if(m<x) printf("-1");
    else
    {
        printf("%d %d ",m-x+1,(m-x+1)*2);
        for(i=2;i<=x;i++) printf("%d %d ",MX-i*2,MX-i*2-1);
        if(n&1) printf("%d",rand()%MX+1);
    }
    return 0;
}