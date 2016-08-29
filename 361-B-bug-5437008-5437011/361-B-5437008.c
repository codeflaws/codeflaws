#include <stdio.h>

int main(int argc, char *argv[])
{
	int N,K,i;
	scanf("%d %d",&N,&K);
	if(N==1||K==N)
	{
		puts("-1");
		return 0;
	}
	if(K==N-1)
	{
		for(i=1;i<=N;++i)
		{
			printf("%d ",i);
		}
		return 0;
	}
	printf("%d ",K+2);
	for(i=2;i<K+2;++i)
	{
		printf("%d ",i);
	}
	for(i=K+2;i<N;++i)
	{
		printf("%d ",i+1);
	}
	printf("1\n");
	return 0;
}