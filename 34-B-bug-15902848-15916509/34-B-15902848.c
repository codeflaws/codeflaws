#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int a,b,i,j,sum=0,temp;
	scanf("%d %d", &a, &b);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<b;i++)
		sum=sum+abs(arr[i]);
	printf("%d",sum);
	return 0;
}