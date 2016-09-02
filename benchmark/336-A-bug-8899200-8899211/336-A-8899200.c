#include<stdio.h>
int main(int argc, char *argv[])
{
	int x,y;
	int flag;
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	flag=1;
	else if(x<0 && y>0)
	flag=2;
	else if(x<0 && y<0)
	flag=3;
	else
	flag=4;
	switch(flag)
	{
		case 1:
			printf("%d %d %d %d",0,(x+y),(x+y),0);
			break;
		case 2:
			printf("%d %d %d %d",(x-y),0,0,(y-x));
			break;
		case 3:
			printf("%d %d %d %d",(x+y),0,0,(x+y));
			break;
		case 4:
			printf("%d %d %d %d",0,(y-x),0,(x-y));
	}
	return 0;
	
}
