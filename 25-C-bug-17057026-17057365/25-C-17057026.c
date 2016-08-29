#include<stdio.h>

int arr[301][301];

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    scanf("%d", &k);
    for (int line = 0; line < k; line++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (arr[a][b] > c) {
            arr[a][b] = c;
            arr[b][a] = c;
        }
        // add to the matrix and run johnson's algorithm
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (arr[i][j] > arr[i][a] + arr[a][b] + arr[b][j]) {
                    arr[i][j] = arr[i][a] + arr[a][b] + arr[b][j];
                    arr[j][j] = arr[i][a] + arr[a][b] + arr[b][j];
                } if (arr[i][j] > arr[i][b] + arr[b][a] + arr[a][j]) {
                    arr[i][j] = arr[i][b] + arr[b][a] + arr[a][j];
                    arr[j][i] = arr[i][b] + arr[b][a] + arr[a][j];
                }
            }
        }

        // debugging: print the matrix of shortest paths

        // output sum of shortest distances between all pairs
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                sum += arr[i][j];
            }
        }
        printf("%lld ", sum);
    }
return 0;
}
