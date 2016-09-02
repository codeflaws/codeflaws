#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, d, h, i;
    scanf("%d %d %d", &n, &d, &h);
    if(d > 2 * h || (h == 1 && d == 1)) {
        puts("-1");
        return 0;
    }
    int next = 2;
    for(i = 1; i <= h; ++i) {
        printf("%d %d\n", i, i + 1);
        ++next;
    }
    d -= h;
    if(d > 0) {
        for(i = 1; i <= d; ++i) {
            if(i == 1) {
                printf("%d %d\n", 1, next);
            } else {
                printf("%d %d\n", next - 1, next);
            }
            ++next;
        }
    }
    for(i = next; i <= n; ++i) {
        printf("%d %d\n", h, i);
    }
    return 0;
}
