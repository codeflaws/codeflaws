#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    uint32_t K,B,Time,NoBacteria,counter1;
    counter1=0;
    scanf("%d %d %d %d",&K,&B,&Time,&NoBacteria);
    while(NoBacteria>(K+B))
    {
        NoBacteria-=B;
        NoBacteria/=K;
        counter1++;
    }
    if (counter1>= Time)
    {
        printf("%d",0);
    }else {
    printf("%d",Time -counter1);
    }
    return 0;
}
