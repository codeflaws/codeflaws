#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
	int m,n,i,x,y;
	scanf("%d %d",&n,&m);
	int min=0;
	int max=n+1;
	if(m==0)
		printf("%d\n",n-2);
	else
	{
		for(i=0;i<m;i++)
		{
			scanf("%d %d",&x,&y);
			if(x<y)
			{
				if(min<x)
					min=x;
				if(max>y)
					max=y;
			}
			else
			{
				if(y>min)
					min=y;
				if(max>x)
					max=x;
			}
		}
		if(min>=max)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n",max-min);
		}
	}
	return 0;
}
