#include<stdio.h>
#define m(t,p) (3*p/10>p-p/250*t?3*p:p-p*t/250)
int main(int argc, char *argv[])
	{
	int a,b,c,d;scanf("%d%d%d%d",&a,&b,&c,&d);
	if(m(c,a)>m(d,b))
		printf("Misha");
	else if(m(c,a)<m(d,b))
		printf("Vasya");
	else printf("Tie");
	return 0;
	}
