#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j,k,n,a[1001];
    a[0]=100;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=k;
    while(a[i]!=1)
    {
        if(i==n)
            i=1;
        else
            i++;
    }
    printf("%d",i);
    return(0);
}
