#include <stdio.h>

int main(int argc, char *argv[])
{
    int n = 0;
    scanf("%d", &n);

    int t = 0;
    int x0 = 0, y0 = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    scanf("%d %d", &x0, &y0);
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    for (int i = 0; i < n - 1; i++) {
        float r = (y2 - y0) / (x2 - x0);

        if ((r > 0 && y0 == y1) || (r < 0 && x0 == x1)) {
            t++;
        }

        x0 = x1;
        y0 = y1;
        x1 = x2;
        y1 = y2;
        scanf("%d %d", &x2, &y2);
    }

    printf("%d\n", t);
    return 0;
}
