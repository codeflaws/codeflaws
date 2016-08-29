#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,count,sum=0;
	scanf("%d",&n);
	i=0;
	count=1;
	while(count<n)
	{
		i++;
		sum=sum+i;
		printf("%d ",(sum+1)%n);
		count++;
	}
return 0;
}
