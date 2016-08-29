#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,s=0;
	int a[7];
	scanf("%d",&n);
	for (i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<100000;i++)
	{
		s=s+a[i%7];
		if (s>=n) 
		{
			printf("%d",((i%7)+1));
			return 0;
		}
	}
	
}