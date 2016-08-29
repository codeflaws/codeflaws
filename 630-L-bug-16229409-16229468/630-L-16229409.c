#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned long long code, ans;
    int num, r1, r2, r3, r4, r5,i;
    scanf("%d", &num);
    r5 = num % 10 * 100;
    num = num / 10;
    r4 = num % 10 * 10;
    num = num / 10;
    r3 = num % 10 * 1000;
    num = num / 10;
    r2 = num % 10;
    num = num / 10;
    r1 = num % 10 * 10000;
    code = r1 + r2 + r3 + r4 + r5;
    ans = code;
    ans = ans * code;
    ans = ans * code % 100000;
    ans = ans * code;
    ans = ans * code;
    ans = ans % 100000;
    printf("%lld", ans);
    return 0;
}
