#include<stdio.h>
//#include<conio.h>

int main(int argc, char *argv[])
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<=n/2;i++)
	{
		for(j=n/2;j>i;j--)
			printf("*");
		for(k=1;k<=2*i+1;k++)
			printf("D");
		for(j=n/2;j>i;j--)
			printf("*");
		printf("\n");
	}

	for(i=1;i<=n/2;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(k=1;k<=n-2*i;k++)
			printf("D");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}

	//getch();
	return 0;
}
