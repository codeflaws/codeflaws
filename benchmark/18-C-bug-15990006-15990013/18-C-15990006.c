#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int i, N;
    long long int num, *sums;
    scanf("%u", &N);
    sums = (long long int *)malloc(N*sizeof(long long int));
    for(i = 0; i < N; i++){
        scanf("%lld", num);
        if(i == 0)
            sums[i] = num;
        else
            sums[i] = sums[i-1]+num;
    }
    unsigned int goodcut = 0;
    for(i = 0; i < N-1; i++){
        if(sums[i] == sums[N-1]-sums[i])
            goodcut++;
    }
    printf("%u", goodcut);
    return 0;
}
