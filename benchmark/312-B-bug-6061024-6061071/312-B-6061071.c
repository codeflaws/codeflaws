#include <stdio.h>
int main(int argc, char *argv[])
{
double a,b,c,d;
scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
double x;
double r=(1-a/b)*(1-c/d);
x=(a/b)*(1/(1-r));
printf("%.7lf\n",x);
return 0;
}
