#include<stdio.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[])//Aлгоритм обхода в глубину
{
	int i,j,n,m,x,i_temp=1;
	scanf("%d %d",&n,&m);
	if(n==0)
	{
		printf("0 1\n");
		printf("0 %d\n",m);
		printf("0 0\n");
		printf("0 %d\n",(m-1));
		return 0;
	}
	else if(m==0)
	{
		printf("1 0\n");
		printf("%d 0\n",n);
		printf("0 0\n");
		printf("%d 0\n",(n-1));
		return 0;
	}

	else if((m==n)&&(n==1))
	{
		printf("%d %d\n",n,m);
		printf("0 0\n");
		printf("%d 0\n",n);
		printf("0 %d\n",(m));
		return 0;
	}
	else if(m==n)
	{
		if(m+m*1.41f>(2*sqrt((double)(m*m+(m-1)*(m-1)))))
		{
			printf("%d %d\n",n,m);
			printf("0 0\n");
			printf("%d 0\n",n);
			printf("0 %d\n",n);
		}
		else 
		{
			printf("%d %d\n",n-1,m);
			printf("0 0\n");
			printf("%d %d\n",n,m);
			printf("1 0\n");
		}
		return 0;


	}
	else if(n<m)
	{
		if(m+sqrt((double)n*n+m*m)<(2*sqrt((double)(n-1)*(n-1)+(m)*(m))))
		{
			printf("%d %d\n",n-1,m);
			printf("0 0\n");
			printf("%d %d\n",n,m);
			printf("1 0\n");
			return 0;
		}
		else
		{
			printf("%d %d\n0 0 \n0 %d\n%d 0\n",n,m,m,n);
			return 0;
		}
	}
	else if(n>m)
	{
		if(n+sqrt((double)n*n+m*m)<(2*sqrt((double)n*n+(m-1)*(m-1))))
		{
			printf("%d %d\n",n,m-1);
			printf("0 0\n");
			printf("%d %d\n",n,m);
			printf("0 1\n");
			return 0;
		}
		else
		{
			printf("%d %d\n0 0 \n%d \n0 %d\n",n,m,n,m);
			return 0;
		}

	}
	return 0;
}