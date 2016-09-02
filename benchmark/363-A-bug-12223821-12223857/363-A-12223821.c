#include <stdio.h>
#include <stdlib.h>
void sor(int x)
{
    int f,i;
    f=x/5;
    if(f==0)
    {
        printf("O-|");
        for(i=1;i<=x;i++)
            printf("O");
        printf("-");
        for(i=1;i<=(4-x);i++)
            printf("O");
    }
    else if(f==1)
    {
        x=x-5;
        printf("-O|");
        for(i=1;i<=x;i++)
            printf("O");
        printf("-");
        for(i=1;i<=(4-x);i++)
            printf("O");
    }
    else
    {
        printf("-O|");
        printf("-");
        for(i=1;i<=4;i++)
            printf("O");
    }
}
int main(int argc, char *argv[])
{
    int n,z,x;
    scanf("%d",&n);
    z=n;
    while(z!=0)
    {
        x=z%10;
        sor(x);
        printf("\n");
        z/=10;
    }
    return 0;
}
