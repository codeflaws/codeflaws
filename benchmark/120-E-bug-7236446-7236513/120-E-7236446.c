#include <stdio.h>

int main(int argc, char *argv[])
{
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        puts((n & 1) ? "0" : "1");
    }
    return 0;
}
