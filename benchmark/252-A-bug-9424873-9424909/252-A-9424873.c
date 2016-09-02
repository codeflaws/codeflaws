#include<stdio.h>
int main(int argc, char *argv[])
{
	int k,j,n,a[104],i,max,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=0;x=1;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			x=x^a[j];
			if(x>max)
			max=x;
		}
	}
	printf("%d",max);
	return 0;
}
