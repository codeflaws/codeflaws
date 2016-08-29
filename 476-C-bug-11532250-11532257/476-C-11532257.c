#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MOD 1000000007

int main(int argc, char *argv[])
{
	long long int a,b,c,d,e,f,i,j;
	scanf("%lld %lld",&a,&b);
	long long int p,q,r,s;
	p = (a*(a+1)/2)%MOD;
	q = (b*(b-1)/2)%MOD;
	r = (p*b+a)%MOD;
	s = (q*r)%MOD;
	printf("%lld\n",s);
	return 0;
}
