#include<stdio.h>

int main(int argc, char *argv[])
{
    long long a=0,n;

    scanf("%lld", &n);

    while(n>a)
    {
        n=n-a;
        a++;
    }

    printf("%lld\n", n);
    return 0;
}
