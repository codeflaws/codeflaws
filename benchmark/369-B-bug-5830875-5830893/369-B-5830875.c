#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,sa,sk,l,r,a,b,i;
    scanf("%d%d%d%d%d%d",&n,&k,&l,&r,&sa,&sk);
    a=sk/k;
    b=sk%k;
    for(i=0;i<b;i++)
    {

        printf("%d ",a+1);

    }
    for(i=0;i<k-b;i++)
    {
        printf("%d ",a);
    }

    sk=sa-sk;
    k=n-k;
    a=sk/k;
    b=sk%k;
    for(i=0;i<b;i++)
    {
        printf("%d ",a+1);
    }
    for(i=0;i<k-b;i++)
    {

        printf("%d ",a);
    }

    printf("\n");
    return 0;
}
