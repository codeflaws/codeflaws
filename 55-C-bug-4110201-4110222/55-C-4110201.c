// write in C...
#include <stdio.h>

#ifdef DEBUG
#define D(x...) fprintf(stderr, x)
#else
#define D(x...)
#endif

int w, h, n;

int main(int argc, char *argv[]) {
    scanf("%d %d %d", &w, &h, &n);
    while (n--) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x <= 4 || y <= 4 || x >= w-3 || y >= h-3) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}

