#include <stdio.h>
#include <string.h>
#define min(x, y) ((x) > (y) ? (y) : (x))
#define max(x, y) ((x) > (y) ? (x) : (y))
int main(int argc, char *argv[])
{
    int n, m;
    int i, j, k;
    int cnt, a;
    int fl;
    int min1, max1;
    char buf[100];
    while (scanf("%d%d", &n, &m) == 2) {
        gets(buf);
        min1 = 1;
        max1 = 1000;
        for (i = 0; i < m; i++) {
            gets(buf);
            a = atoi(&buf[15]);
            if (buf[7] == 'l') {
                max1 = min(max1, a-1);
            }
            else if (buf[7] == 'r') {
                min1 = max(min1, a+1);
            }
        }
        if (min1 > max1) {
            printf("-1\n");
            continue;
        }
        cnt = 0;
        for (i = 1; i <= n; i++) {
            if (i >= min1 && i <= max1)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}