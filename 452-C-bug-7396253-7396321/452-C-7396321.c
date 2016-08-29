#include<stdio.h>
int main(int argc, char *argv[])
{
double n,m;
while(scanf("%lf%lf",&n,&m)!=EOF)
if(n==1&&m==1)
printf("1.0000000000000000\n");
else
printf("%.16lf\n",1.0/n+((n-1)*(m-1))/(n*(n*m-1)));
return 0;
}