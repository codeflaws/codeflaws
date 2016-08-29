#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,x,y,a,b,c,d,e;
    scanf("%d %d %d",&n,&x,&y);
    if((n*y)%100==0)a=(n*y)/100;
    else a=((n*y)/100)+1;
    if(a>x)printf("%d",a-x);
    printf("0");
    return 0;
    }
