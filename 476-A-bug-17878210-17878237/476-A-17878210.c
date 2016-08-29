#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	if(n%2==0)
	{
		i=(n/2);
	}
	else
	{
		i=(n/2)+1;
	}
	if(i>m)
	{
		for(j=i;j>0;j++)
		{
			if(j%m==0)
			{
				printf("%d\n",j);
				break;
			}
		}
	}
	else
	{
		printf("%d\n",-1);
	}
	return 0;
}
