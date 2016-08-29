//+++++++++++++++++++++++++++++//
//      Karan Aggarwal         //
//       IIIT-Hyderabad        //
//+++++++++++++++++++++++++++++//
// Topic: 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#define si(n) scanf("%d",&n)
#define rep(i,n) for(i=0;i<n;i++)
#define REP(i,a,b) for(i=a;i<b;i++)
#define pn printf("\n")
#define pw printf(" ")
#define pi(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define sll(n) scanf("%lld",&n)
#define ss(s) scanf("%s",s)
#define ps(s) printf("%s",s)
#define mod 1000000007
typedef long long LL;
//inline int readint(){int n=0;char c;while(1){ c=getchar_unlocked();if(c=='\n'||c==' '||c==EOF)break;n=(n<<3) + (n<<1) +c-'0';}return n;}
//inline long long readlonglong(){long long n=0;char c;while(1){ c=getchar_unlocked();if(c=='\n'||c==' '||c==EOF)break;n=(n<<3) + (n<<1) +c-'0';}return n;}
int abs(int a){ if(a<0)return -1*a; return a;}
int big(int a,int b){if(a>b)return a;return b;}
int small(int a,int b){if(a<b)return a;return b;}
int compare(const void *a, const void *b)
{
    int *p1=(int*)a;
    int *p2=(int*)b;
    return *p1-*p2;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int aa,bb;
LL  f[1000005]; 
LL md(LL a)
{
    a = a%mod;
    while(a>=0)a-=1000000007;
    while(a<0)a+=1000000007;
    return a;
}
int isgood(int x)
{
    int N = x;
    while(N)
    {
        if(N%10 == aa)
        {
            N/=10;
            continue;
        }
        if(N%10 == bb)
        {
            N/=10;
            continue;
        }
        else return 0;
    }
    return 1;
}
LL  inv(LL a)
{
    LL B,m,n,x,y,u,v,q,r;
    x=v=0;
    y=u=1;
    LL b = mod;
    B=mod;
    while(a)
    {
        q=b/a;
        r=b%a;
        m=x-u*q;
        n=y-v*q;
        b=a;a=r;
        x=u;y=v;
        u=m;v=n;
    }
    return md(x);
}

int main(int argc, char *argv[])
{
    int m,l,ans,sum,min,max,n,i,j,k,x,y,t;
    int counta,countb,mina,maxa;
    si(aa);
    si(bb);
    si(n);
    f[0]=1;
    REP(i,1,n+5)
        f[i] = (f[i-1]*(LL)i)%mod;

    LL anss=0;
    rep(i,n+1)
    {
        if(isgood(aa*i + bb*(n-i)))
            anss +=         md(f[n] * inv(f[i]*f[n-i]));
        anss = md(anss);
    }
    pll(md(anss));
    return 0;
}

