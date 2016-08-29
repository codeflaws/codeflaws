#include <stdio.h>

int main(int argc, char *argv[])
{
    int N, K, i;
    scanf("%d %d", &N, &K);
    if(N < K)
    {
        printf("-1\n");
    }
    else if(K == 1)
    {
        if(N == 1)
        {
            printf("a\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    else
    {
        int M = N-K;
        for(i=0; i<M; ++i)
        {
            if(i&1)
            {
                printf("b");
            }
            else
            {
                printf("a");
            }
        }
        if(M&1)
        {
            printf("ba");
        }
        else
        {
            printf("ba");
        }
        for(i=2; i<K; ++i)
        {
            printf("%c", 'a'+i);
        }
    }
    return 0;
}
