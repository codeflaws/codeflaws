#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ll long long int
int arr[100009];
int dp[100009];
int di[100009];
int gcd(int a,int b)
{
    if(b == 0)
    return a;
    else if(a==0)
    return b;
    return gcd(b,a%b);
}
int mmax(int a,int b)
{
    return a>b?a:b;
}
int main(int argc, char *argv[])
{
    ll n,i,j;
    scanf("%lld",&n);
    memset(dp,-1,sizeof(dp));
    ll m =3;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        if(arr[i]>m)
            m = arr[i];
    }
    m++;
    for(i=2;i<m;i++)
    {
        if(di[i]==0)
        {
            di[i]=i;
            if(1LL*i*i<m)
            {
                for(j=i*i;j<m;j+=i)
                {
                    if(di[j]==0)
                    {
                        di[j]=i;
                    }
                }
            }
        }
    }

    int res=0;
    for(i=0;i<n;i++)
    {
        int temp = arr[i];
        int cb=0;

        while(temp>1)
        {
            cb = mmax(cb,dp[di[temp]]);
            temp = temp/di[temp];
        }
        cb++;
        res = mmax(res,cb);
        temp = arr[i];
        while(temp>1)
        {
            dp[di[temp]] = mmax(dp[di[temp]],cb);
            temp = temp/di[temp];
        }

       // printf("%d ",dp[arr[i]]);
    }
    printf("%d\n",res);
    return 0;
}
