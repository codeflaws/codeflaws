#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int a;
    scanf("%lld",&a);
    if((a>=11 && a<=19) || a==21)
    {
        printf("4");
    }
    else if(a==20)
    {
        printf("15");
    }
    else if(a<=10 || a>21)
    {
        printf("0");
    }
    return 0;
}