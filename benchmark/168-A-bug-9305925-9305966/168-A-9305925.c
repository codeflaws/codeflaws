/*
 * A. Wizards and Demonstration
 * http://codeforces.com/problemset/problem/168/A
 * */
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, x, y;

    scanf("%d %d %d", &n, &x, &y);

    float ans = ((float)n * (float)y - 100.0 * (float)x)/100.0;

    if (ans < 0)
        printf("0\n");
    else
        printf("%d\n", (int)ceil(ans));
    return 0;
}
