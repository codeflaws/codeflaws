#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a=0,b,res=0;
    scanf("%d",&n);
    if(n%2==0)
    {n=n/2;
    b=n-1;
    a=a+1;
    while(b>a)
    {n=n-1;
    b=n-1;
    a=a+1;
    res++;
    }
    printf("%d",res);
    return 0;}
    if(n%2==1)
    {printf("0");}
    return 0;
}
