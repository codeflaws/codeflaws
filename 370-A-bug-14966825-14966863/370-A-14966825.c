#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (a==c && b==d){
		printf("0 ");
	}
	else if (a==c || b==d){
		printf("1 ");
	}
	else{
		printf("2 ");
	}
	e=abs(a-c);
	f=abs(b-d);
	if ((e%2==0 && f%2==0)|| (e%2==1 && f%2==1)){
		if (a+b>=c+d){
			printf("1 ");
		}
		else{
			printf("2 ");
		}
	}
	else{
		printf("0 ");
	}
	if (e>=f){
		printf("%d ",e);
	}
	else{
		printf("%d ",f);
	}
	
return 0;
}
