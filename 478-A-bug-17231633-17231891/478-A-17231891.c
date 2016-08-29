#include<stdio.h>

int main(int argc, char *argv[])
{
    int sum=0,c,Loop,a,b;

    for(Loop=0;Loop<5;Loop++)
    {
        scanf("%d",&c);
        sum+=c;
    }

    a=sum/5;
    b=sum%5;

    if(b==0 && a>0)
        printf("%d\n",a);
    else
        printf("-1\n");

    return 0;

}
