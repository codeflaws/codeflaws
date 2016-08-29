#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,n1=0,k,n=0,a,b;
    scanf("%d",&k);
    for(i=0; i<k; i++)
    {
        scanf("%d",&a);
        n=n|a;

    }
    for(i=0; i<k; i++)
    {
        scanf("%d",&b);
        n1=n1|b;
    }
    printf("%d\n%d\n%d",n,n1,n+n1);
    return 0;
}
