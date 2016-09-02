#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int MAX(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
int main(int argc, char *argv[])
{
	int r1,c1,r2,c2;
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	int rook=2,bishop=0,king=0;
	king=MAX(abs(r1-r2),abs(c1-c2));
	if(r1==r2 || c1==c2)
		rook=1;
	if((abs(r1-r2) + abs(c1-c2))% 2==0)
	{
		if(abs(r1-r2)-abs(c1-c2)==0)
			bishop=1;
		else
			bishop=MAX(abs(r1-r2),abs(c1-c2));
	}
	printf("%d %d %d\n",rook,bishop,king);


	return 0;
}
