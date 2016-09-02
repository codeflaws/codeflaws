#include <stdio.h>

int main(int argc, char *argv[])
{
	long long int i,j,len,n,curr;
	scanf("%lld",&n);
	char c[n+1];
	len=n+1;
	scanf("%s",c);
	long long int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",a+i);
	}
	for(i=0;i<n;i++)
	{
		if(c[i]=='<')
		{
			b[i]=i-a[i];

		}
		else if(c[i]=='>')
		{
			b[i]=i+a[i];
		}
	}
	curr=0;
	j=0;
	for(i=0;i<n;i++)
	{
		if(j>=n || j<0)
		{
			break;
		}
		curr = b[j];
		j = curr;
	}
	if(curr>=0 && curr<n)
		printf("INFINITE\n");
	else
		printf("FINITE\n");
	return 0;
	

}