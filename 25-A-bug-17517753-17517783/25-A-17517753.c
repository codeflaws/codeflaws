#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i = 0, a, b, c, x;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a % 2 == 0)
        if ((b % 2 == 0) || (c % 2 == 0)) {
            x = 0;
            if (b % 2 == 1) i = 2;
            if (c % 2 == 1) i = 3;
        }
        else {
            x = 1; i = 1;
        }
    else if ((b % 2 == 1) || (c % 2 == 1)) {
        x = 1;
        if (b % 2 == 0) i = 2;
        if (c % 2 == 0) i = 3;
    }
    else {
        x = 0; i = 1;
    }
    b = i;
    if (!b)
        for (i = 4; i <= n; i++){
            scanf("%d", &a);
            if (a % 2 == x) b = i;
        }
    printf("%d\n", b);
    return 0;
}
