#include<stdio.h>

typedef long long ll;

int main(int argc, char *argv[])
{
		ll x,y;
		scanf("%lld%lld",&x,&y);

		if( x > 0 && y > 0 )
				printf("0 %lld %lld 0\n",x+y,x+y);
		else if( x < 0 && y < 0 )
				printf(" %lld 0 0 %lld\n",x+y,x+y);
		else if( x < 0 && y > 0 )
				printf("%lld 0 0 %lld\n",x-y,-x+y);
		else 
				printf("0 %lld %lld 0\n",x-y,-x+y);

		return 0;
}
