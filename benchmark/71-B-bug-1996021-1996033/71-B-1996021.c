#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,k,t,i,j;
	scanf("%d %d %d",&n,&k,&t);
	if(t!=0)
	{
		long long int x=(n*k*t)/100;
		//printf("%lld\n",x);
		int z=x/k;
		int v=x-(z*k);
		if(z==n)
		{
			for(i=0;i<n-1;i++)
			printf("%d ",k);
			printf("%d\n",k);
		}
		else if(z<n)
		{
			for(i=0;i<z;i++)
			printf("%d ",k);
			printf("%d ",v);
			for(j=i+1;j<n-1;j++)
			printf("0 ");
			printf("0\n");
		}
	}
	else
	{
		for(i=0;i<n-1;i++)
		printf("0 ");
		printf("0\n");
	}
	return 0;
}
