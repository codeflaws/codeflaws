#include<stdio.h>

int main(int argc, char *argv[])
{
	int n,k,m,i,j;
	
	while(scanf("%d%d",&n,&k) != EOF)
	{
		m=(n*(n*(n+k-2)+1+k))/2;
		
		printf("%d\n",m);
		
		for(i = 1;i <= n;i ++)
		{
			for( j = 1; j <= n;j ++)
			{
				if(j < k)
				printf("%d ",(k-1)*(i-1)+j);
				else
				printf("%d ",(n-k+1)*(i-1)+n*(k-1)+j);
			}
			
			printf("\n");
		}
	}
	
	return 0;
}
