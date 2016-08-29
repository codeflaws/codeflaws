#include <stdio.h>

int A[100001];

int main(int argc, char *argv[])
{
	int K,N,i,j,Min,Sum,id;
	scanf("%d %d",&N,&K);
	for(i=0;i<N;++i)
	{
		scanf("%d",&A[i]);
	}
	Min=0x7fffffff;
	for(i=0;i<K;++i)
	{
		for(Sum=0,j=i;j<N;j+=i)
		{
			Sum+=A[j];
		}
		if(Sum<Min)
		{
			Min=Sum;
			id=i+1;
		}
	}
	printf("%d\n",id);
	return 0;
}