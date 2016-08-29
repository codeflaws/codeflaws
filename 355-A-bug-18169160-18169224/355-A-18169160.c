#include<stdio.h>

int main(int argc, char *argv[])
{
	int k,d,i,c;

	scanf("%d%d",&k,&d);

	if(k==1)
		printf("%d",d);
	else
	{
		int a[10]={0,10,11,12,13,14,15,16,17,18};

		if(k==2)
			printf("%d",a[d]);
		else
		{
			c=a[d]-9;
			if(c<=0)
			{
				printf("No solution");
				goto label;
			}
			printf("%d",c);
			for(i=1;i<=k-2;i++)
				printf("0");
			printf("9");

		}

	}

	label:
	return 0;
}
