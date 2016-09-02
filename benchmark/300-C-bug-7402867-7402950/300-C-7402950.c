#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define LL long long
#define mod 1000000007
#define Min(x,y) ((x<y)?x:y)

LL f[1000007]={1,1};
int a,b,n;
int check(int i)
{
    while(i % 10 == a || i % 10 == b)
        i /= 10;
    return  i?0:1;
}

LL q_pow(LL x ,int y)
{
    LL ans = 1;
    x %= mod;
    while(y)
    {
        if(y & 1)
            ans = ans * x % mod;
        x = x * x % mod;
        y >>= 1;
    }
    return ans;
}

int main(int argc, char *argv[])
{
    int k;
    for(k = 2 ;k <= 1000007; k ++)
        f[k] = f[k-1] * k % mod;

    while(~scanf("%d%d%d",&a,&b,&n))
    {
        int i;
        LL ans = 0;
        for(i=0;i<=n;i++)
        {
            LL sum=i*a+(n-i)*b;
            if(check(sum))
            {
                LL z=f[n-i]*f[i];
                ans=(ans+f[n]*q_pow(z,mod-2))%mod;
            }
        }
        printf("%I64d\n",ans);
    }
    return 0;
}
		 		   	  				 	 	   	 		