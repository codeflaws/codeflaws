#include<stdio.h>
int main(int argc, char *argv[])
	{
	int a[100],n,c,i,max=0;
	scanf("%d%d",&n,&c);
	for(i=0;i<n;i++)
		{scanf("%d",&a[i]);}
	for(i=0;i<n-1;i++)
		{if((a[i]-a[i+1])>max)
			max=a[i]-a[i+1];
		}
	max-c?printf("%d",max-c):printf("0");
	return 0;
	}
