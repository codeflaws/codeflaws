#include<stdio.h>
int main(int argc, char *argv[])
{
	int r1,r2,d1,d2,c1,c2,a,b,c,d;
	scanf("%d%d%d%d%d%d",&r1,&r2,&c1,&c2,&d1,&d2);
	for(a=1;a<=9;a++)
	{
		b=r1-a;
		c=c1-a;
		d=r2-c1+a;
		if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)&&(1<=a)&&(a<=9)&&(1<=b)&&(b<=9)&&(1<=c)&&(c<=9)&&(1<=d)&&(d<=9))
		{
			printf("%d %d\n%d %d",a,b,c,d);
			return 0;
		}
	}
	printf("-1");
	return 0;
}