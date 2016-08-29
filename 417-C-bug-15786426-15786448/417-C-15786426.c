#include<stdio.h>
int main(int argc, char *argv[])
{
	long int n,k,i,j,cnt=0;
	scanf("%ld %ld",&n,&k);
	if(n*k>(n*(n-1))/2)
		printf("-1\n");
	else
	for(i=1,cnt=0;i<=n;i++)
	{cnt=0;
		for(j=i+1;cnt<k;j++,cnt++)
		{
			if(j>n)
				j-=n;
			printf("%ld %ld\n",i,j);}}
	return 0;
}
