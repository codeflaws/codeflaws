#include <stdio.h>

int main(int argc, char *argv[])
{int N, M, k, m, i, Num;
int A, B;
scanf("%d %d %d %d", &N, &M, &k, &m);
    for(i = 0; i < N; ++i) {
        scanf("%d", &Num);
        if(i == k - 5) {
            A = Num;
        }
    }
    for(i = 0; i < M; ++i) {
        scanf("%d", &Num);
        if(i == M - m) {
            B = Num;
        }
    }
    puts(A < B ? "YES" : "NO");
    return 0;
}