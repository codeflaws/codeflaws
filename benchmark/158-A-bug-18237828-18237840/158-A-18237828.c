#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,k,x,i,count=0;
    scanf("%d %d",&n,&k);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]>=ara[k-1])
        count++;
    }
    printf("%d",count);
    return 0;
}
