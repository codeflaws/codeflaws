#include<stdio.h>
typedef double d;
int main(int argc, char *argv[])
{
	double m,R,a,b;
	int M,i;
	scanf("%lf%lf",&m,&R);
	a=2*R/m;M=m;b=R*1.4142135623730950488;
	for(i=1;i<M;i++)a+=2*(1-i/m)*((2*i*R+b)/m);
	printf("%.10lf\n",a);
	return 0;
}
