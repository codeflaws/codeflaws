#include<stdio.h>
int main(int argc, char *argv[])
{
	long int n;
	long int k;
	int i;
	scanf("%ld%ld",&n,&k);
	if(k > n*(n-1)/2)
	{
		printf("no solution\n");
	}
	else 
	{
		long int no=0;
		for(i=1;i<=n;i++)
		{
			printf("0 %ld\n",no);
			no=no+2;
		}

	}


	return 0;
}

