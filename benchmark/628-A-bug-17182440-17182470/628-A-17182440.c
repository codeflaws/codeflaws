#include<stdio.h>
int main(int argc, char *argv[])
{
int n,p,b;
scanf("%d",&n);
scanf("%d%d",&b,&p);
int c=n;
int m=0,sum=0;
while(n!=1)
{
while(sum<=n)
{
sum+=2;
}
sum-=2;
if(n%2==0)
n/=2;
else
{
n/=2;
n++;
}
m+=sum/2;
sum=0;
}
int bottle =b*m*2+m;
int towel=c*p;
printf("%d%d",bottle,towel);
return 0;
}
