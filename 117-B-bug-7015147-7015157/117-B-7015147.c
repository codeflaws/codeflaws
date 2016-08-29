#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }

int main(int argc, char *argv[]) {
    int a, b, mod;
    scanf("%d %d %d", &a, &b, &mod);
    if(b >= mod - 1)
        puts("2");
    else {
        int ans = mod + 2, i;
        int rem = ((int)1e9) % mod;
        for(i = 1; i < mod; i++) {
            int cur = (((long long)rem) * i) % mod;
            if(0 < cur && cur <= mod - 1 - b)
                ans = min(ans, i);
        }
        if(ans == mod + 2)
            puts("2");
        else
            printf("1 %09d\n", ans);
    }
    return 0;
}
