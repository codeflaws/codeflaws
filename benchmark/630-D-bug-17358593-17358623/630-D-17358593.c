#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    long long ans;
    scanf("%d", &n);
    if(n == 0) {
        puts("1");
        return 0;
    }
    ans = n;
    ans = ans * (6 + n * 6) / 2;
    printf("%lld\n", ans + 1);
    return 0;
}
