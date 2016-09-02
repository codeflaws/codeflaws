#include <stdio.h>
#include <stdlib.h>

long long getMin(long long a,long long b)
{
    if(a>b)
        return b;
    return a;
}
long long f(long long index ,int m,int b[],int n,int a[])
{
    int i;
    long long ans=0;
    for(i=0;i<m;i++)
    {
        if(index<b[i])
        {
            ans+=abs(index-b[i]);
        }

    }
    for(i=0;i<n;i++)
    {
        if(a[i]<index)
        {
            ans+=abs(index-a[i]);
        }

    }

    return ans;
}
int main(int argc, char *argv[])
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    int b[m];

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }


    long long left = 1;
    long long right = 1000000000;

    while(right-left+1>3)
    {
        long long m1 = left+(right-left)/3;
        long long m2 = left+2*(right-left)/3;


        if(f(m1,m,b,n,a)<f(m2,m,b,n,a))
        {
            right = m2;
        }else
        {
            left = m1;
        }
    }

    long long ans = getMin(f(left,m,b,n,a),getMin(f(right,m,b,n,a),f(left+1,m,b,n,a)));


   printf("%I64d",ans);
    return 0;
}