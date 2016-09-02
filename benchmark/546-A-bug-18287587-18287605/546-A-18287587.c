#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int n,cost=0;
    int w,k,i;
    scanf("%d %lld %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        cost=i*k+cost;
    }
    if(cost>n)
       printf("\n%lld",cost-n);
    else
        printf("\n%lld",n);
    return 0;
}
