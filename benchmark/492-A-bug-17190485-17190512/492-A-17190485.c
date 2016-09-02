#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,x,j,sum=0;
    scanf("%d",&n);
    for(i=1;sum<=n;i++)
    {
        x=i*(i+1)/2;
        sum=sum+x;
    }
    i-=2;
    if(n==1)
        i++;

    printf("%d",i);

    return 0;
}
