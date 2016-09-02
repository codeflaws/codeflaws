#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,l,k,j,t,i;
	int a[300];
	scanf("%d",&n);
	int sum=0;

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	int p=0;
	int flag=0,val=0;
	while(sum!=0)
	{
		val=0;
		if(flag==0)
		{
			if(a[p]!=0)
			{
				a[p]--;
				printf("P");
				sum--;
			}
			if(p<n-1)
			{
				p++;
				printf("R");
			}
			if(p==n-1)
			{
				val=1;
				if(a[p]!=0)
				{
					a[p]--;
					printf("P");
					sum--;
				}
				if(sum!=0)
					printf("L");
				p--;
			}
		}
		if(flag==1)
		{
			if(a[p]!=0)
			{
				a[p]--;
				printf("P");
				sum--;
			}
			if(p>0)
			{
				p--;
				printf("L");
			}
			if(p==0)
			{
				flag=0;
				if(a[p]!=0)
				{
					a[p]--;
					printf("P");
					sum--;
				}
				printf("R");
				p++;
			}
		}
		if(val==1)
			flag=1;
	}
	printf("\n");
	return 0;
}

			













