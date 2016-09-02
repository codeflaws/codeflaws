#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
    int n, m, a[100], k = 0, i, j, min = 1000, max = 0, ans = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++){
       scanf("%d", &j);
        if (j >= m){
            a[k] = j;
            k++;
            if (j < min){
                min = j;
            }
            if (j > max){
                max = j;
            }
        }
    }
    for (i = min; i <= max; i++){
        n = 0;
        for (j = 0; j < k; j++){
            n += a[j] / i;
        }
        if (n * i > ans){
            ans = n * i;
        }
    }
    printf("%d", ans);
    return 0;
}
