#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main(int argc, char *argv[])
{
	long long int a,b,c,d,m,n,i,u,v,x,y,p,g;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	if(a*d<c*b)
	{
		u=a;v=b;x=c;y=d;
	}
	else
	{
		u=b;v=a;x=d;y=c;
	}
	u=u*x*y;
	v=v*x*y;
	p=(u/x)*y;
	p=v-p;
	if(p==0)
	printf("0/1");
	else
	{
	g=gcd(p,v);
	m=p/g;
	n=v/g;
	printf("%lld/%lld",m,n);}
	return 0;
}
