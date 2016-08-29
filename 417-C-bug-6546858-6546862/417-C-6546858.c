#include <stdio.h>

int N, K;

int main(int argc, char *argv[])
{
    scanf("%d %d", &N, &K);
    if (K > (N >> 1))
    {
        puts("-1");
        return 0;
    }
    printf("%d\n", N * K);
    int i, j;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= K; j++)
        {
            int other = (i + j) % N;
            if (!other)
                other = N;
            printf("%d %d\n", i, other);
        }
    }
    return 0;
}
