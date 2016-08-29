#include <stdio.h>

int main(int argc, char *argv[])
{
    int N,K,i;
    scanf("%d %d",&N,&K);
    i=(1+N-1)*(N-1)/2;
    if(i<=K)
    {
        puts("no solution");
    }
    else
    {
        for(i=0;i<N;++i)
        {
            printf("%d %d\n",i,i);
        }
    }
    return 0;
}
