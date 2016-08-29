#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if((x>0)&&(y>0))
    {
        int m;
        m=x+y;
        printf("0 %d %d 0",m,m);
    }
    if((x<0)&&(y>0))
    {
        int m;
        m=fabs(x)+y;
        printf("-%d 0 0 %d",m,m);
    }
    if((x<0)&&(y<0))
    {
        int m;
        m=fabs(x)+fabs(y);
        printf("-%d 0 0 -%d",m,m);
    }
    if((x>0)&&(y<0))
    {
        int m;
        m=fabs(x)+fabs(y);
        printf("0 %d -%d 0",m,m);
    }
    return 0;
}
