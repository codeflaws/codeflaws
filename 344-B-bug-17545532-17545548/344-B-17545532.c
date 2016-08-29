#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c,f=0,g=0,h=0,s,d;
	scanf("%d %d %d",&a,&b,&c);
	s=a+b+c;
	if (s%2==1){
		printf("Impossible");
		return 0;
	}
	f=(a+b-c);
	g=(b+c-a);
	h=(a+c-b);
	if (g%2==0 && f%2==0 && h%2==0){
		printf("%d %d %d",f/2,g/2,h/2);
	}
	else{
		printf("Impossible");
	}
	return 0;
}
