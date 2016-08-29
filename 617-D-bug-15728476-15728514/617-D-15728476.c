#include <inttypes.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
	int64_t a1,a2,b1,b2,c1,c2;
	while(scanf("%lld%lld%lld%lld%lld%lld",&a1,&a2,&b1,&b2,&c1,&c2)!=EOF)
	{
		if((a1==b1&&a1==c1)||(a2==b2&&a2==c2))printf("1\n");
		else if(a1==b1&&((a2<=c2&&b2<=c2)||(a2>=c2&&b2>=c2)))printf("2\n");
		else if(a1==c1&&((a2<=b2&&b2>=c2)||(a2>=b2&&b2<=c2)))printf("2\n");
		else if(b1==c1&&((a2<=c2&&b2>=a2)||(a2>=c2&&b2<=a2)))printf("2\n");
		else printf("3\n");
	}
return 0;
}
