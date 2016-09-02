#include<stdio.h>
int main(int argc, char *argv[])
{
	long int d,h,v,e;
	float x;
	scanf("%ld%ld%ld%ld",&d,&h,&v,&e);
	x=(float)((v*4)/(3.14*d*d))-e;
	x<=0?printf("NO"):printf("YES\n%lf",h/x);
return 0;
}
