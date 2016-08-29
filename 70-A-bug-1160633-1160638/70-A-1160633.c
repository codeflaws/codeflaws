#include <stdio.h>

const int mod = 1000003;

int a[1001];

void init()
{
    int i;
    a[1] = 1;
    for (i = 2; i <= 1000; i ++)
    {
        a[i] = a[i - 1] * 3;
        if (a[i] >= mod)
        {
            a[i] %= mod;
        }
    }
}

int main(int argc, char *argv[])
{
    int n;
    init();
    while (scanf("%d", &n) == 1)
    {
        printf("%d\n", a[n]);
    }
    return 0;
}