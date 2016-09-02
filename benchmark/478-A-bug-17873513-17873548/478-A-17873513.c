#include<stdio.h>
int main(int argc, char *argv[])
{
	int a[5],sum=0;
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int avg=sum/5;
	if(sum==avg*5)
		printf("%d",avg);
	else
		printf("-1");
return 0;
}