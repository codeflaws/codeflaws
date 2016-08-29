#include <stdio.h>

int main(int argc, char *argv[])
{
    int N, i;
    int A[91];
    scanf("%d", &N);
    for(i = 1; i <= N; ++i) {
        scanf("%d", &A[i]);
    }
    A[0] = 0;
    for(i = 1; i <= N; ++i) {
        if(A[i] - A[i - 1] > 15) {
            printf("%d\n", A[i - 1] + 15);
            return 0;
        }
    }
    puts("90");
    return 0;
}
