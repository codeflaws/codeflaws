#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, i, j;
    scanf(" %d", &n);
    for(i = 1, j = n * n; j > i; i++, j--) printf("%d %d\n", i, j);
    return 0;
}
