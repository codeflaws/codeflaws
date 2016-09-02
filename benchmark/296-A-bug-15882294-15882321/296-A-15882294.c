#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k,n,a[1000],sum,sum1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		printf("YES");
	}
	else if(n%2==0&&n>1)
	{
		for(i=0;i<n;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					sum++;
				}
			}
			if(sum>=n/2)
			{
				printf("NO");
				break;
			}
			if(sum<=n/2)
			{
				sum1++;
			}
		}
		if(sum1==n)
		{
			printf("YES");
		}
	}
	else if(n%2!=0&&n>1)
	{
			for(i=0;i<n;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					sum++;
				}
			}
			if(sum>n/2+1)
			{
				printf("NO");
				break;
			}
			if(sum<=n/2+1)
			{
				sum1++;
			}
		}
		if(sum1==n)
		{
			printf("YES");
		}
	}
	
		
	
return 0;
}
