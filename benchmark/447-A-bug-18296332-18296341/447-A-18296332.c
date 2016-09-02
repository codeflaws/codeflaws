#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int p, n, i;
    scanf("%d %d", &p, &n);
    int arr[p];
    for (i = 0; i < p; i++) arr[i] = 0;
    for (i = 0; i < n; i++){
        long x;
        scanf("%ld", &x);
        if (arr[x % p]++) break;
    }
    printf("%d\n", (i == n)?-1:i);
    return 0;
}
