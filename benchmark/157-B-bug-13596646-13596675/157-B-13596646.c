#include<stdio.h>
#include<string.h>
#define pi 3.1415926536
int a[1001];
int main(int argc, char *argv[])
{
    int n,i,j,t;
    double ans=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",a+i);
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    if(n%2==0)
    {
        for(i=0;i<n;++i)
        {
            if(i%2==0)
            ans-=(pi*a[i]*a[i]);
            else
                ans+=(pi*a[i]*a[i]);
        }
    }
    else
    {
        for(i=0;i<n;++i)
        {
            if(i%2==1)
            ans-=(pi*a[i]*a[i]);
            else
                ans+=(pi*a[i]*a[i]);
        }
    }
    printf("%0.4lf",ans);
    return 0;
}
