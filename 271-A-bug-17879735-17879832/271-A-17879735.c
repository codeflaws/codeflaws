#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,a,b,c,d,i;
    scanf("%d",&n);
    for(i=n+1;i<=9000;i++)
    {
        a=i/1000;
        b=(i%1000)/100;
        c=((i%1000)%100)/10;
        d=((i%1000)%100)%10;
        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d)
        {
            break;
        }

    }
    printf("%d",i);
    return 0;
}
