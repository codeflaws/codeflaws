#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
//	int num[101][101];
	int i,j,k,n,sum;			
	int a, mid;
	sum = 0;

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a);
			if(i==j)
				sum += a;
			if(j==(n+1)/2)
				sum += a;
			if(i==(n+1)/2)
				sum += a;
			if(i+j == n+1)
				sum += a;
			if(i==(n+1)/2 && j==(n+1)/2)
				mid = a;
		}
	}		
	sum -= (3*mid);
	printf("%d\n",sum);
	return 0;
}
