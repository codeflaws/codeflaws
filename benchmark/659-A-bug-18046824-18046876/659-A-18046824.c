#include <stdio.h>

/*
 * http://codeforces.com/problemset/problem/659/A
 */
int main(int argc, char *argv[])
{
    int n = 0, a = 0, b = 0;
    scanf("%d %d %d", &n, &a, &b);

    int s = a + (b % n);
    if (b > 0 && s > n) {
        s -= n;
    } else if (b < 0 && s < 0) {
        s += n;
    }

    printf("%d\n", s);

    return 0;
}
