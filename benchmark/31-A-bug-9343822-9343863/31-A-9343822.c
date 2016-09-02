/*
 * A. Worms Evolution
 * http://codeforces.com/problemset/problem/31/A
 * */
#include <stdio.h>

int div[101];

int main(int argc, char *argv[]) {
    int n, i, j, sum;

    scanf("%d", &n);
    
    for (i=0; i<n; i++)
        scanf("%d", &div[i]);

    for (i=0; i<n-1; i++){
        for(j=i+1; j<n; j++) {
            for (sum=0; sum<n; sum++) {
                if (div[sum] == div[i] + div[j] && sum != i && sum != j) {
                    printf("%d %d %d\n", div[sum], div[i], div[j]);
                    return 0;
                }
            }
        }
    }

    printf("-1\n");
    return 0;
}
