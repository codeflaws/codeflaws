#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define fo(i,m,n) for(i=m;i<n;i++)
#define rep(i,n) fo(i,0,n)
#define s(n) scanf("%lld",&n)
#define ss(s) scanf("%s",s)
#define sc(c) scanf("%c",&c)
#define ps(s) printf("%s",s)
#define p(n) printf("%lld\n",n)
#define swp(i,a,b) {i=a^b a^=i b^=i}
#define mod(a) (a<0?-1*a:a)

typedef long long int ll;

int main(int argc, char *argv[])
{
	ll n,k,i,l=0,m=n-1;
	s(n); m=n-1; ll a[n]; memset(a,0,sizeof(a)); s(k);
	rep(i,k)
		if(!(i&1))
		{
			a[l]=1;
			printf("%lld ",1+l++);
		}
		else
		{
			a[m]=1;
			printf("%lld ",1+m--);
		}
	if(k&1)
	{
		rep(i,n)
			if(!a[i]) printf("%lld ",i+1);
	}
	else
		rep(i,n)
			if(!a[i]) printf("%lld ",i+1);
	puts("");
	return 0;
}
