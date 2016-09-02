#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (i = 0; i < n; i++) arr[i] = 0;
    for (i = 0; i < m; i++){
        long max = 0; int vote = 1;
        for (j = 0; j < n; j++){
            long x;
            scanf("%ld", &x);
            if (max < x){
                max = x;
                vote = j;
            }
        }
        arr[vote]++;
    }
    long max = 0;
    for (i = 1; i < n; i++){
        if (arr[max] < arr[i]) max = i;
    }
    printf("%d\n", max+1);
    return 0;
}
