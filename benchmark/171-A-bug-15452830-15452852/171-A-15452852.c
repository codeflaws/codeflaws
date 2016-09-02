#include <stdio.h>
long long int x,y,z,i,j,k,g=1,r,top=1;
int main(int argc, char *argv[])
{
	scanf("%lld %lld",&x,&y);
	if (x/10==0 && x!=0)
	{
		x*=10;
		printf("%lld",x+y);
	}
	else
	{
		z=y;
		for (i = 1; i <1000000 ; i++)
		{
			z/=10;
			if (z==0)
				break;
		}
		for (k = 0; k <i-1 ; k++)
		{
			g*=10;
		}
		for (j = 1; j <=i ; j++)
		{
			r=y%10;
			y/=10;
			top+=r*g;
			g/=10;
		}
		printf("%lld",x+top-1);
	}
	return 0;
}
