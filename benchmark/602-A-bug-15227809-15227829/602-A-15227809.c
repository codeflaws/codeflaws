#include<stdio.h>
long long power(int x,int n);
int main(int argc, char *argv[])
{
    int n,y,j,a[11],i;
    long long x=0,v=0;
    scanf("%d%d",&n,&y);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        v+=a[i]*power(y,j);
    }
    scanf("%d%d",&n,&y);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        x+=a[i]*power(y,j);
    }
    if(v==x)
        printf("=");
    else if(v<x)
        printf("<");
    else
        printf(">");
    return 0;
}
long long power(int x,int n)
{
    long long t;
    if(n==1||n==0)
        return 1;
    t=power(x,n/2);
    t=t*t;
    if(n%2)
        t=t*x;
    return t;
}
