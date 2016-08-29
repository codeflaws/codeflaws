#include<stdio.h>
#include<math.h>
# define PI 3.141592654
int main(int argc, char *argv[])
{
	long int d,h,v,e;
	double t;
	scanf("%ld %ld %ld %ld",&d,&h,&v,&e);
	if(v<e*e*e)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
		printf("\n");
		t=h/(v*4/(PI*d*d)-e);
		printf("%lf",t);
	}
return 0;
}
