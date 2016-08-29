#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int x,y,a;
	scanf("%d %d",&x,&y);
	a=(abs(x)+abs(y));
	//printf("%d",a);
	if(x>0 && y>0)
		printf("0 %d %d 0",a,a);
	if(x<0 && y>0)
		printf("%d 0 0 %d",-a,a);
	if(x<0 && y<0)
		printf("0 %d %d 0",-a,-a);
	if(x>0 && y<0)
		printf("0 %d %d 0",-a,a);
	return 0;
}
