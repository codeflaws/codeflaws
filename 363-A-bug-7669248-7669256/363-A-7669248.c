#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int n,i,d;
    scanf("%lld",&n);
    if(n==0)
      printf("O-|-OOOO\n");
    while(n>0)
    {
        d=n%10;
        n=n/10;
        if(d<5)
        {
             printf("O-|");
             for(i=0;i<d;i++)
               printf("O");
             printf("-");
             for(i=0;i<4-d;i++)
               printf("O");
             printf("\n");
        }
        else if(d>5)
        {
            printf("-O|");
            d=d-5;
             for(i=0;i<d;i++)
               printf("O");
             printf("-");
             for(i=0;i<4-d;i++)
               printf("O");
             printf("\n");
        }
    }
    return 0;
}