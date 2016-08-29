#include <stdio.h>

int main(int argc, char *argv[]) {
    long long int a, b, t, count = 0, x;

    scanf("%lld%lld", &a, &b);

    while (b > 0) {
        x = a/b;
        count = count + x;

        t = b;
        b = a - (b*x);
        a = t;
    }

    printf("%d", count);

    return 0;
}
