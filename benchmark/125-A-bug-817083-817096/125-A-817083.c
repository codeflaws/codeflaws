#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,a,b,k;
    scanf("%d", &n);
    k = n / 3;
    if (k % 3 == 2)
        k++;
    a =  k / 12;
    n -= 36*a;
    b = n / 3;
    if (n % 3 == 2)
        b++;
    printf("%d %d", a, b);
    return 0;
}