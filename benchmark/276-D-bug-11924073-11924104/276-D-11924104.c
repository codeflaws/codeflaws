#include<stdio.h>
int a[75],b[75];
void convert(int a[],long long int n,int i)
{
	if(n==0)
		return;
	a[i]=n%2;
	convert(a,n/2,i+1);
}
int comp(int a[],int b[],int i)
{
	if(i<0)
		return -1;
	if(a[i]!=b[i])
		return i;
	return comp(a,b,i-1);
}
long long int power(int n)
{
	if(n==0)
		return 1;
	long long int a=power(n/2);
	if(n%2==0)
		return a*a;
	return a*a*2;
}
int main(int argc, char *argv[])
{
	long long int l,r;
	scanf("%lld %lld",&l,&r);
	convert(a,l,0);
	convert(b,r,0);
	printf("%lld\n",power(comp(a,b,75)+1)-1);
	return 0;
}
