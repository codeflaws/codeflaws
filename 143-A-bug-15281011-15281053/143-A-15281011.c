#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k=0,l,a,b,c,d,r1,r2,c1,c2,d1,d2;
	scanf("%d%d",&r1,&r2);
	scanf("%d%d",&c1,&c2);
	scanf("%d%d",&d1,&d2);
	c=(d2+c1-r1)/2;
	a=c1-c;
	b=r1-a;
	d=c2-b;
	if(a!=b&&b!=c&&c!=d&&a!=d&&a>0&&a!=c&&b!=d&&a<10&&b>0&&b<10&&c>0&&c<10&&d>0&&d<10)
	printf("%d %d\n%d %d",a,b,c,d);
	else
	printf("-1");
return 0;
}