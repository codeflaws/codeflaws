#include<stdio.h>
#include<math.h>
long long int ans=0;
void compute(char cmd,long long int n,long long int h,long long int power)
{
	if(h==0)
		return ;
	long long int l=power;
	long long int m=l/2;
	if(cmd=='L' && n>m)
	{
		ans=ans+l;
		long long int o=n%m;
		if(o==0)
			o=m;

		compute('L',o,h-1,l/2);
	}
	else if(cmd=='L' && n<=m)
	{
		ans=ans+1;
		compute('R',n,h-1,l/2);
	}
	else if(cmd=='R' && n<=m)
	{
		ans=ans+l;
		compute('R',n,h-1,l/2);
	}
	else if(cmd=='R' && n>m)
	{

		int o=n%m;
		if(o==0)
			o=m;
		ans=ans+1;
		compute('L',o,h-1,l/2);
	}
	
}		
int main(int argc, char *argv[])
{
	long long int h,n;
	scanf("%lld %lld",&h,&n);
	long long int power=pow(2,h);
	compute('L',n,h,power);
	printf("%lld\n",ans);
	return 0;
}
