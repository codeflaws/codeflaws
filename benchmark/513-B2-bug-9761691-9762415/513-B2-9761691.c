#include<stdio.h>

int main(int argc, char *argv[])
{
	/*1 2 3 4
	1 2 4 3
	1 3 4 2
	1 4 3 2
	2 3 4 1
	2 4 3 1
	3 4 2 1
	4 3 2 1*/
	int A[100];
	int B[1000]={0};
	long long int start,end,a,b,c,i,j,k,n,m;
	scanf("%lld%lld", &n, &m);
	for(i=0;i<n;i++)
	{
		A[i]=0;
	}
	start=0;
	end=n-1;
	long long int count=0;
	while(m!=0)
	{
		B[count++]=m&1;
		m=m>>1;
	}
	i=1;
	for(j=n-1;j>=0;j--)
	{
		if(B[j]==0)
		{
			A[start++]=i;
			i++;
		}
		else
		{
			A[end--]=i;
			i++;
		}
	}
	for(i=0;i<n;i++)
		printf("%d", A[i]);
	printf("\n");
	return 0;
}
