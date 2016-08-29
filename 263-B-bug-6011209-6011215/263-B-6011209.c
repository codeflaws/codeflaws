#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i,x,y ;
    scanf("%d%d",&n,&k);
    long long int a[n],temp;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=i;
        y=i-1;
        while(y>=0&&a[y]>a[x])
        {
            temp=a[y];
            a[y]=a[x];
            a[x]=temp;
            y--;x--;
        }
    }
    if(k>=n)
        printf("-1");
    else
    printf("%lld %lld",a[n-k],a[n-k]);
    return 0;
}
