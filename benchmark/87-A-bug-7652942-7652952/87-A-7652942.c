#include<stdio.h>
#include<math.h>
long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(int argc, char *argv[])
{
	long long  int a,b,max,min;
	scanf("%lld%lld",&a,&b);
	max=(a>b)?a:b;
	min=(a>b)?b:a;
	long long int l=(a*b)/gcd(a,b);
	printf("%lld %lld\n",l/min,l/max);
	if(fabs((l/min)-(l/max))>1)
	{
		if(a<b)
			puts("Dasha");
		else
			puts("Masha");
	}
	else
		puts("Equal");
	return 0;
}
