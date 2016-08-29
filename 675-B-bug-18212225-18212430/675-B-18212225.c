#include<stdio.h>
typedef unsigned u;
int main(int argc, char *argv[])
{
	u n,a,b,c,d,e,w,x,y,z;
	scanf("%u%u%u%u%u",&n,&a,&b,&c,&d);
	e=w=a+b;
	x=a+c;
	y=b+d;
	z=c+d;
	if(w<x)w=x;if(w<y)w=y;if(w<z)w=z;
	if(e>x)e=x;if(e>y)e=y;if(e>z)e=z;
	w=w-e;
	printf("%u\n",(n-w)*n);
	return 0;
}
