#include<stdio.h>
int main(int argc, char *argv[])
{
	long int n,t=0,i,l=0;
	scanf("%ld",&n);
	int zisad[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&zisad[i]);
		t+=zisad[i];
		if(zisad[i]>l)
		{
			l=zisad[i];
			
		}
	}
	for(i=1;i++;)
	{
		if(t+i-l>l)
		{
			break;
		}
	}
	printf("%ld",i);
return 0;
}
