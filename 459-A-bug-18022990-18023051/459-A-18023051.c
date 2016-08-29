#include<stdio.h>
int main(int argc, char *argv[])
	{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	if(x1-x2!=0 && ((float)(y2-y1)/(x2-x1)==1 || (float)(y2-y1)/(x2-x1)==-1))
	printf("%d %d %d %d\n",x2,y1,x1,y2);
	else if(x2-x1==0)
	printf("%d %d %d %d\n",x1+(y1-y2),y2,x1+(y1-y2),y1);
	else if(y2-y1==0)
	printf("%d %d %d %d\n",x1,y1+(x2-x1),x2,y1+(x2-x1));
	else 
	printf("-1\n");
	return 0;
	}
