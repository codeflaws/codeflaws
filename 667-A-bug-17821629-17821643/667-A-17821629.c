#include<stdio.h>
int main(int argc, char *argv[])
{
	double d,h,v,e,pi=3.14159,a,z;
	scanf("%lf%lf%lf%lf",&d,&h,&v,&e);
	a=pi*d*d/4;
	z=v/a;
    if(e>z)
	{
		printf("NO\n");
		}	
		else
		printf("YES\n%.12lf",(h/(z-e)));
		return 0;
}