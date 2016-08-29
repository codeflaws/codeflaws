#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, m, k, sum = 0;
    scanf("%d %d %d", &n, &m, &k);
    long arr[m+1];
    for (n = 0; n < m+1; n++){
        scanf("%ld", &arr[n]);
    }
    for (n = 0; n < m; n++){
        if ((arr[n] >= arr[m]-k) && (arr[n] <= arr[m]+k)) sum++;
    }
    printf("%d\n", sum);
    return 0;
}
