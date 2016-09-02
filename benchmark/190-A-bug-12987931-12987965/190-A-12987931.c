#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if (a==0 && b==0){
		printf("%d %d",a,b);
	}
	else if (a==0){
		printf("Impossible");
	}
	else if(b==0){
		printf("%d %d",a,a);
	}
	else if (b==1){
		printf("%d %d",a,a);
	}
	else if (a==b){
		c=b;
		d=2*a-1;
		printf("%d %d",c,d);
	}
	else if(a<b){
		c=b;
		d=a+b-1;
		printf("%d %d",c,d);
	}
	else if(a>b){
		c=a-b;
		d=a+b-1;
		printf("%d %d",c,d);
	}
	return 0;
}
