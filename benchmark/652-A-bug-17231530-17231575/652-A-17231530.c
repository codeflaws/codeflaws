#include<stdio.h>
#define MOD 1000000007
typedef long long int llu;
llu mod(llu a) {
	return a>0?a:-1*a;
}
int main(int argc, char *argv[])
{
	llu h1,h2,a,b,i,ans=0;
	scanf("%lld%lld",&h1,&h2);
	scanf("%lld%lld",&a,&b);
	if(b>=a) {
		if( h2>8*a+h1 )
			ans = -1;
		else
			ans = 0;
	}
	else {
		if(h1+8*a>=h2) {
			ans = 0;
		}
		else {
			ans = (h2-(h1+8*a))/(12*(mod(b-a)));
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}
