#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,a;
    scanf("%d",&n);
    n-=10;
    if(n>=1&&n<=9)a=4;
    else if(n==1)a=4;
    else if(n==10)a=15;
    else a=0;
    printf("%d",a);
    return 0;
}
