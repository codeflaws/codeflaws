#include <stdio.h>
int main(int argc, char *argv[])
{
    unsigned int n,i,a,b,years=0;
    do
    {
        printf("n");
        scanf("%d",&n);
    }
    while(( n<2)||(n>100));
    int rank[n-1];
    for (i=1;i<n;i++)
    {
        do
        {
            scanf("%d",&rank[i]);
        }
        while(((rank[i])>100)||((rank[i])<1));
    }
    do 
    {
        scanf("%d",&a);
    }
    while (a>=n);
    do 
    {
        scanf("%d",&b);
    } 
    while (b<a);
    for (i=a;i<b;i++)
    {
        years=years+rank[i];
    }
    printf("%d",years);
    return 0;
}