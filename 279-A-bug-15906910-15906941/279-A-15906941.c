#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x==0 && y==0)
	{
		printf("0");
		return 0;
	}
	if(x==y)
	{
		if(x>0)
		{
			printf("%d",4*x-3);
			return 0;
		}
		else
		{
			printf("%d",4*abs(x)-1);
			return 0;
		}
	}
	else if((abs(x)==abs(y))&&(x<0)&&(y>0))
	{
		printf("%d",4*y-2);
		return 0;
	}
	else if(y==1-x  && x>0)
	{
		printf("%d",4*x-4);
		return 0;
	}
	if(abs(x)<abs(y))
	{
		if(y>0)
		{
			printf("%d",(4*y)-2);
			return 0;
		}
		else if(y<0)
		{
			printf("%d",4*abs(y));
			return 0;
		}
	}
	if(abs(x)>abs(y))
	{
		if(x>0)
		{
			printf("%d",(4*x)-3);
			return 0;
		}
		else if(x<0)
		{
			printf("%d",(4*abs(x))-1);
			return 0;
		}
	}
	if((abs(x)==abs(y))&&(x>0)&&(y<0))
	{
		printf("%d",4*x);
		return 0;
	}
	return 0;
}