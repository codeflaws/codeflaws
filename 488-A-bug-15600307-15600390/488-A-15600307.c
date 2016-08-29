#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	long long int n,i,j,rem,count=1;
	scanf("%lld",&n);
	for(i=n+1;i<n+15;i++)
	{
		j=abs(i);
		while(j>0)
		{
			rem=j%10;
			if(rem==8)
			{
				printf("%lld",count);
				return 0;
			}
			j=j/10;
		}
		count++;
	}
	return 0;
}