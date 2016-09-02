#include<stdio.h>
#include<math.h>
/*long long int po (int base,int p)
{
	long long int ans=1;
	while(p)
	{
		if(p&1)
		ans=ans*base;
		base=base*base;
		p=p/2;
	}
	return ans;
}*/
int main(int argc, char *argv[])
{
	long long int p,temp=1,i,j,count=0,b,ans=1;
	scanf("%lld",&p);
//	printf("%lld\n",po(p,4));
	if(p==2)
	{
		printf("0");
		return 0;
	}
	if(p==3)
	{
		printf("1");
		return 0;
	}
	if(p==5)
	{
		printf("2");
		return 0;
	}
	for(i=1;i<=p-1;i++)
	{
		ans=1;	
		temp=1;
		for(j=1;j<=p-2;j++)
		{
			ans=ans*i;
			ans=ans%p;
			if(ans==1)
			{
				temp=0;
				break;
			}
		}
		ans=ans*i;
		ans=ans%p;
		if(ans==1 && temp==1)
		count++;
	}
	printf("%lld",count);
	return 0;
}