#include<stdio.h>
long long n,n1,sum,a[20],value;

long long findMinOnes(long long n,int i)
{
	int count = 0;
	long long value1,value2;
	if(n<0)
		n *=-1;
	if(i==1)
		return n;
	if(n==1)
		return 1;
		while(n>a[i])
		{
			n-= a[i];
			count+=i;
		}
		value1 = count + findMinOnes(n,i-1);
		n-= a[i];
		count+=i;
		value2 = count + findMinOnes(n,i-1);
		if(value1 < value2)
			return value1;
		else
			return value2;
}
int main(int argc, char *argv[])
{
	int k=1,i=0,count;
	long long mul = 10;
	scanf("%I64d",&n);
	n1=n;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	a[k]=1;
	for(k=2;k<=i+1;k++)
	{
		a[k]=a[k-1]+mul;
		mul*=10;
	}
	n=n1;
	printf("%I64d",findMinOnes(n,i+1));
	return 0;
}