#include<stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
int main(int argc, char *argv[])
{
    int a,b,c,d,min,max,g;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max=MAX(a*d,b*c);
    min=a*d+b*c-max;
    g=gcd(min,max);
    printf("%d %d",(max-min)/g,max/g);
    return 0;
}
int gcd(int x, int y)
{
    while(x!=y)
    {    if(x>y)return gcd(x-y,y);
        else return gcd(x,y-x);
    }
    return x;
}
