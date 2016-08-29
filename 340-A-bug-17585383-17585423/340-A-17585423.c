#include <stdio.h>

int gcd(int a, int b)
{
    while(a!=b)
        if(a>b)
            a-=b;
        else
            b-=a;
    return a;
}

int main(int argc, char *argv[])
{
    unsigned int x,y,a,b;

    scanf("%d %d %d %d",&x,&y,&a,&b);

    int lcm=(x*y)/gcd(x,y);

    printf("%d",b/lcm - (a-1)/lcm);

    return 0;
}
