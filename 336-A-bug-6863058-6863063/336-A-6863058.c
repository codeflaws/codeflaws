#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	int x,y,t;
	
	scanf("%d %d",&x,&y);
	
	if(x<0 && y<0)
	{
		t=abs(x)+abs(y);
		printf("%d %d %d %d",-t,0,0,-t);
	}
	
	else if(x<0 && y>0)
	{
		t=abs(x)+abs(y);
		printf("%d %d %d %d",-t,0,0,t);
	}
	
	else if(x>0 && y<0)
	{
		t=abs(x)+abs(y);
		printf("%d %d %d %d",t,0,0,-t);
	}
	
	else
	{
		t=x+y;
		printf("%d %d %d %d",0,t,t,0);
	}
	return 0;
}
