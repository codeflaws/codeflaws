#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int n,*a,i,j;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	int ans=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		ans=ans+a[i];
	}
	j=0;
	int max=0;
	for(i=0;i<n;i++)
	{
		j=j+a[i];
		if(j<0)
			j=0;
		if(j>max)
			max=j;
	}
	printf("%d\n",2*j-ans);
	return 0;
}
