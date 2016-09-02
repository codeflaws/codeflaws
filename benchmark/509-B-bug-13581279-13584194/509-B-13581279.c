#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,k;
	int a[105],i,j,c,max=0,min=200;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	if(min<(max/k))
	printf("NO");
	else
	{
		printf("YES\n");
		for(i=0;i<n;i++)
		{
			c=1;j=1;
			while(c<=a[i])
			{
				printf("%d ",j);
				if(j==k)
				j=1;
				else
				j++;
				c++;
			}
			printf("\n");
		}
	}
	return 0;
}
