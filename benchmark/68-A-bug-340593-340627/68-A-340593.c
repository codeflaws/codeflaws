#include <stdio.h>
#define oo 1000000000
int main(int argc, char *argv[])
{
    long min=oo,i,kk,a,b;
    for(i=1;i<=4;i++)
    {
        scanf("%ld ",&kk);
        if(kk<min)
            min=kk;
    }
    scanf("%ld %ld\n",&a,&b);
    if(b<min)
        printf("%ld\n",b-a+1);
    else
        printf("%ld\n",(min-a)<0?0:a-min);
    return 0;
}
