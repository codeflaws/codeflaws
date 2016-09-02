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
    ans = (long long)n * 3 * (n + 1);
    printf("%lld\n", ans + 1);
    return 0;
}
