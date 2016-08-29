#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, c, x, y, max = 0;
    scanf("%d %d", &n, &c);
    n--; scanf("%d", &x);
        while (n--){
            scanf("%d", &y);
            if (max < (x - y)) max = x - y;
            x = y;
        }
    printf("%d\n", max - c);
    return 0;
}
