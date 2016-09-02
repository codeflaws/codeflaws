#include <stdio.h>

int D,N;

int main(int argc, char *argv[])
{
    scanf("%d %d",&D,&N);
    int i;
    int acum=0;
    for(i=0;i<N-1;i++)
    {
        int m;
        scanf("%d",&m);
        acum+=D-m;
    }
    printf("%d\n",acum);
    return 0;
}