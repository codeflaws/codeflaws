#include <stdio.h>

int main(int argc, char *argv[])
{
	int l,d,v,g,r,t,c,y;
	double a,b,e,w,n;
	scanf("%d %d %d %d %d",&l,&d,&v,&g,&r);
	e=(double)v;
	a=d/e;
	t=(int)a;
	w=a-t;
	y=t%(g+r);
	//w=t/(g+r);
	if (y>=g){
		
		b=r-w;
		
		
	}
	c=l-d;
	n=c/e;
	//printf("%lf",a-t);
	printf("%.8lf",a+n+b);
	return 0;
}
