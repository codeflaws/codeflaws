#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int a,b[100001],c,d,e,f,sm,x,i;
    scanf("%lld",&a);
    for(i=0;i<a-1;i++)
    {
        scanf("%lld",&b[i]);
    }
    scanf("%lld %lld",&d,&e);
    x=a;
    sm=0;
    for(c=1;c<=(e-d);c++)
    {
        sm=sm+b[x-a+d-1];
        x++;
    }
    printf("%I64d",sm);
    return 0;
}