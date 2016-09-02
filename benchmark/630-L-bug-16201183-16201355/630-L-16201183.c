#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	long long int n;
	scanf("%lld",&n);
	n=(n/10000LL)*10000LL+((n/100LL)%10LL)*1000LL+(n%10)*100LL+(n/10LL%10LL)*10LL+(n/1000LL%10LL);
	n=10LL*(n/100LL)*(n/100LL)*10000LL%100000LL*(n%100LL)*(n%100LL)*(n%100LL)%100000LL+5LL*(n/100LL)*100LL%100000LL*(n%100LL)*(n%100LL)*(n%100LL)*(n%100LL)%100000LL+(n%100LL)*(n%100LL)*(n%100LL)*(n%100LL)*(n%100LL)%100000LL;
	printf("%lld\n",n%100000LL);
	return 0;
}
