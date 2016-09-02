#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, a, b, c;
    scanf ("%d", &n);
    printf("%d ",a = n / 36);
    b = n - a * 36;
    c = b / 3;
    if (b - c * 3 > 1) c++;
    printf ("%d", c);
    return 0;
}
