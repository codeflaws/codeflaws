#include <inttypes.h>
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int64_t x;
    int n, y, i;
    scanf("%d%d", &n);
    scanf("%lld", &x);
    scanf("%d", &y);
    if(n > y) {
        puts("-1");
        return 0;
    }
    int64_t cnt = y - n + 1;
    if((cnt * cnt + (n - 1)) >= x) {
        printf("%lld\n", cnt);
        for(i = 1; i <= n - 1; ++i) {
            puts("1");
        }
        return 0;
    }
    puts("-1");
    return 0;
}

