#include <stdio.h>

int A[10][10];

int main(int argc, char *argv[])
{
    int N, T;
    scanf("%d %d", &N, &T);
    while(T--) {
        A[0][0] += 512;
        for(int i = 0; i < N - 1; ++i) {
            for(int j = 0; j <= i; ++j) {
                if(A[i][j] > 512) {
                    int val = A[i][j] - 512;
                    A[i + 1][j] += val / 2;
                    A[i + 1][j + 1] += val / 2;
                    A[i][j] = 512;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j <= i; ++j) {
            if(A[i][j] == 512) {
                ++ans;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
