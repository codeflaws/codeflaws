#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long n; scanf("%ld", &n);
    int x, y, a = 0, b = 0, temp = 1, max = 1;
    while (n--){
        scanf("%d %d", &x, &y);
        if ((a == x) && (b == y)) temp++;
        else {a = x; b = y; temp = 1;}
        if (temp > max) max = temp;
    }
    printf("%d\n", max);
    return 0;
}
