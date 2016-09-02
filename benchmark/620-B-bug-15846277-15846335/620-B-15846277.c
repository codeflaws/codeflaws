#include<stdio.h>

int main(int argc, char *argv[])
{
	int arr[10]={6,2,5,5,4,5,6,3,7,6};
	int a,b,sum=0,i,rem,temp;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			sum+=arr[rem];
			printf("%d ",sum);
			temp=temp/10;
		}
	}
	printf("%d",sum);
return 0;
}
