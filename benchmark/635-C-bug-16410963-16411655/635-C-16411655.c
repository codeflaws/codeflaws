#include<stdio.h>
typedef long long unsigned U;
typedef unsigned u;
int main(int argc, char *argv[])
{
	U s,x,a,b,r;u o=1;
	scanf("%I64u%I64u",&s,&x);
	for(a=x,b=1;b<=s;b<<=1);
	for(;b>>=1;)if(!(b&x))
	{
		if(a+(b<<1)<=s){a+=b<<1;o=0;}
		if(a==s)break;
	}
	if(a!=s){printf("0\n");return 0;}
	for(r=b=1;b<=x;b<<=1)if(b&x)r<<=1;
	if(o)r-=2;
	printf("%I64u\n",r);
	return 0;
}
