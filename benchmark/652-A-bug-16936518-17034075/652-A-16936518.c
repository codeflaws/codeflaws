#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int h1,h2,a,b,i,c=0,u,d;
	scanf("%lld%lld%lld%lld",&h1,&h2,&a,&b);
	if(a*8+h1>h2)
	printf("0");
	else if(a<=b)
	printf("-1");
	else if(a*8+h1<h2&&a>=b)
	{
		d=a*8+h1-b*12;
		u=d+12*a;
		c++;
		while(u<h2)
		{
		d=u-12*b;
		u=d+12*a;
		c++;
	    }
	    printf("%lld",c);
	}
	return 0;
}
