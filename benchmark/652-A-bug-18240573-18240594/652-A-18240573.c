#include <stdio.h>

/*
 * http://codeforces.com/problemset/problem/652/A
 */
int main(int argc, char *argv[])
{
    int hc = 0, ha = 0;
    scanf("%d %d", &hc, &ha);

    int a = 0, b = 0, d = 0;
    scanf("%d %d", &a, &b);

    hc += 8 * a;

    if (hc < ha && a <= b) {
        printf("-1\n");

        return 0;
    }

    while (hc <= ha) {
        hc += a * 12 - b * 12;
        d += 1;
    }

    printf("%d\n", d);

    return 0;
}
