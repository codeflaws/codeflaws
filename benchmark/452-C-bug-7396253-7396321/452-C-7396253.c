#include<stdio.h>
int main(int argc, char *argv[])
{
double n,m;
while(scanf("%lf%lf",&n,&m)!=EOF)
printf("%.16lf\n",1.0/n+((n-1)*(m-1))/(n*(n*m-1)));
return 0;
}