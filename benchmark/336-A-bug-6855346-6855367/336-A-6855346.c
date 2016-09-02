#include<stdio.h>
int main(int argc, char *argv[])
{
	long int x,y,x1,x2,y1,y2,i,j;
	scanf("%ld%ld",&x,&y);
	if(x>0&&y>0)
	{
		printf("%ld %ld %ld %ld\n",0,x+y,x+y,0);
	}
	else if(x<0&&y<0)
	{
		printf("%ld %ld %ld %ld\n",x+y,0,0,x+y);
	}
	else if(x>0&&y<0)
	{
		printf("%ld %ld %ld %ld\n",0,x-y,y-x,0);
	}
	else
	{
		printf("%ld %ld %ld %ld\n",x-y,0,0,y-x);
	}
	return 0;
}
