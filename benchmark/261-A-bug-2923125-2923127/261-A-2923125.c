#include <stdio.h>
#include <stdlib.h>

int A[100000];

int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}

int main(int argc, char *argv[])
{
    int M,N,Min,Sum,i,j;
    Min=100000;
    scanf("%d",&M);
    for(i=0; i<M; ++i)
    {
        scanf("%d",&N);
        if(Min>N)
        {
            Min=N;
        }
    }
    scanf("%d",&N);
    for(i=0; i<N; ++i)
    {
        scanf("%d",&A[i]);
    }
    qsort(A,N,sizeof(int),cmp);
    for(i=0; i<N; ++i)
    {
        for(j=0; j<Min&&i<N; ++i,++j)
        {
            Sum+=A[i];
        }
    }
    printf("%d\n",Sum);
    return 0;
}
