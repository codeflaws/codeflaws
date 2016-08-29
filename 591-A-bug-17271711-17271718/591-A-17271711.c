#include<stdio.h>
int main(int argc, char *argv[])
{
	float l,p,q;
	float a;
	scanf("%f",&l);
	scanf("%f",&p);
	scanf("%f",&q);
	a=((p*q*l)/((p+q)*q));
	printf("%.1f",a);
	return 0;
}
	