#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int x,y,p=0,q=0;
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
    {
        printf("%d %d %d %d",p,x+y,x+y,q);
    }

    else if(x<0 && y>0)
    {
        printf("%d %d %d %d",-(abs(x)+abs(y)),p,q,(abs(x)+abs(y)));
    }
    else if(x<0 && y<0)
    {
        printf("%d %d %d %d",-(abs(x)+abs(y)),p,q,(abs(x)+abs(y)));
    }
    else if(x>0 && y<0)
    {
        printf("%d %d %d %d",p,-(abs(x)+abs(y)),(abs(x)+abs(y)),q);
    }
    return 0;
}
