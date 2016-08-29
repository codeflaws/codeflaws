#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{	int n,i,count=0;
	char array[1000];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%c",&array[i]);
	}
//	for(i=0;i<=n;i++)
//		printf("array[%d]:%c\n",i,array[i]);
	if(n>1)
	{
		if(n==2&&array[1]==array[2])
			printf("1\n");
		else
		{
		for(i=1;i<n;i++)
		{
//			printf("array[%d]=%c:array[%d]=%c\n",i,array[i],i+1,array[i+1]);
			if(array[i]==array[i+1])
			{	
//				printf("count--incremented\n");
				count++;
			}
		}
		if(array[n-1]==array[n])
			count++;
		if(count==n)
		printf("%d\n",count-1);
		else
		printf("%d\n",count);
		}
	}
	else
		printf("0\n");
	return 0;
}

