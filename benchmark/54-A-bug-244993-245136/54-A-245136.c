#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, k, h, i, cnt = 0, res = 0, ok = 1;

    scanf("%d%d", &n, &k);
    if (k == 1) res = n;
    else {
        scanf("%d", &h);
        scanf("%d", &h);
        for (i = 1; i <= n; ++i) {
            ++cnt;
            if (i == h && ok) { // holiday
                if (scanf("%d", &h) == EOF) ok = 0; // no more holidays
                ++res;
                cnt = 0;
                continue;
            }
            if (cnt == k) {
                res++;
                cnt = 0;
            }
        }
    }

    printf("%d\n", res);
    return 0;
}