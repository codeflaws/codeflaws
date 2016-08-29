#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,no,no1;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("4 %d\n",n-4);
	}
	else
	{
		//if last digit = 7
		if(n%10==7)
		{
			if(n==17)
				printf("6 9\n");
			else
				printf("12 %d\n",n-12);
		}
		//if last digit = 9
		if(n%10==9)
		{
			if(n==19)
				printf("9 10\n");
			else
			{
				no=14;
				no1=n-14;
				if(no>no1)
					printf("%d %d\n",no1,no);
				else
					printf("%d %d\n",no,no1);
			}		
		}
		//if last digit = 5
		if(n%10==5)
		{
			if(n==15)
				printf("%d %d\n",6,9);
			else
			{
				no=15;
				no1=n-15;
				if(no>no1)
					printf("%d %d\n",no1,no);
				else
					printf("%d %d\n",no,no1);

			}
		}
		//if last digit = 3
		if(n%10==3)
		{
			if(n==13)
				printf("4 9\n");
			else
			{
				no=15;
				no1=n-15;
				if(no>no1)
					printf("%d %d\n",no1,no);
				else
					printf("%d %d\n",no,no1);

			}
		}
		//if last digit = 1
		if(n%10==1)
		{
			no=15;
			no1=n-15;
			if(no>no1)
				printf("%d %d\n",no1,no);
			else
				printf("%d %d\n",no,no1);
		}

	}
	return 0;
}


