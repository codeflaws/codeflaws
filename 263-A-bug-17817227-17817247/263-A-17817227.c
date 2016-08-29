#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int i,j,k,a[5][5],flag=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	printf("%d %d\n",i,j);
	k=fabs(j-2)+fabs(i-2);
	printf("%d\n",k);
	return 0;
}
