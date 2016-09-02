#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i=1,j;
	scanf("%d",&n);
	j=n;
	for(j=1;j<n;j++)
	{
		i=(i+j)%n;
		if(i==0)
		i=n;
		printf("%d ",i);
	}
	return 0;
}
