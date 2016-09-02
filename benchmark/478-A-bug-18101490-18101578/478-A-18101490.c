#include<stdio.h>
int main(int argc, char *argv[])
{
	int arr[5],i,sum=0;
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	for(i=0;i<5;i++)
		{
			sum=sum+arr[i];
		}

	if(sum==0)
		printf("-1");
	if(sum%5==0&&sum!=0)
		printf("%d",sum/5); 
	else 
		printf("-1");
return 0;
}