#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c,d;
	double g,h,t;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	g=(double)a/b;
	h=(double)c/d;
	t=g/(1-g*h);
	printf("%.8lf",t);
	
}
