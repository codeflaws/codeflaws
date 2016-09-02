#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,min=101,min1=101;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<min)
		{
			j=i;
			min1=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]!=min1)
		{
			if(arr[i]<min)
			min=arr[i];
		}
	}
	if(min==101)
	printf("NO");
	else
	printf("%d",min);
	return 0;
}