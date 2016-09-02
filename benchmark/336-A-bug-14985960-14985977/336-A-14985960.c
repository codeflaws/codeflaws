#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (a>0 && b>0){
		printf("0 %d %d 0",a+b,a+b);
	}
	else if (a<0 && b>0){
		printf("%d 0 0 %d",-(abs(a)+b),(abs(a)+b));
	}
	else if (a>0 && b<0){
		printf("0 %d %d 0",-(abs(b)+b),(abs(b)+b));
	}
	else{
		printf("%d 0 0 %d",-(abs(a)+abs(b)),-(abs(a)+abs(b)));
	}
	return 0;
}
