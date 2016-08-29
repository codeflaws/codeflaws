#include<stdio.h>

long long modular_exp(long long a, long long b, long long m)
{
    long long res = 1;
    while(b > 0)
    {
        if(b&1)
            res = (res*a)%m;
        b = b>>1;
        a = (a*a)%m;
    }
    return res;
}

int main(int argc, char *argv[])
{
    int i;
    long long res;

    scanf("%d", &i);

    res = (int)modular_exp(27, i, 1000000007) - (int)modular_exp(7, i, 1000000007);
    if(res < 0)
        res += 1000000007;

    printf("\n%d", ((int)modular_exp(27, i, 1000000007) - (int)modular_exp(7, i, 1000000007)));

    printf("%d", res);
    return 0;
}
