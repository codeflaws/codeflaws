#include<stdio.h>

int main(int argc, char *argv[])
{
	long long int n,k,res;

	scanf("%lld",&n);
	scanf("%lld",&k);
	

               printf("k=%lld  n=%lld",k,n);
	   if(n&1)
            {
		if(k<=(n/2)+1)
			res=2*k-1;
		else
			res=2*(k-1-n/2);
	}

	else
	{
		if(k<=n/2)
			res=2*k-1;
		else
			res=2*(k-n/2);
	}

	printf("%lld\n",res);

	return 0;
}
