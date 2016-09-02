#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int y,k,n;
    int i=0,m=0;
    scanf("%d%d%d",&y,&k,&n);
    if((y/k)*k>=n)    {
        printf("-1\n");
        return 0;
    }
    while(m-y+k<=0)    {
        m+=k;
    }
    while(m+k<=n)    {
        m+=k;
        printf("%d ",m-y);
    }
    printf("\n");
    return 0;
}
