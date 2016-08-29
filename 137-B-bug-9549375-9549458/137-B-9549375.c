#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,j,count;
	count=0;
	scanf("%d",&n);
	int a[6000]={0};
	int i;
	int cout=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		if(a[j]==0)
			a[j]=1;
		else
			count++;
	}
	printf("%d\n",count);
	return 0;
}
