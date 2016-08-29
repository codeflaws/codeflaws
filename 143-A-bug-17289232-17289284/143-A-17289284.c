#include<stdio.h>
int main(int argc, char *argv[])
{
	int r1,r2,c1,c2,d1,d2,i,l=0;
	int a,b,c,d;
	scanf("%d%d%d%d%d%d",&r1,&r2,&c1,&c2,&d1,&d2);
for(i=1;i<=9;i++)
{
	a=i;
	b=r1-a;
	c=c1-a;
	d=r2-c;
	if(b>9||c>9||d>9)
	continue;
	else if(b+d!=c2||a+d!=d1||b+c!=d2)
	continue;
	else if(b==a||b==c||b==d||c==a||c==d||d==a)
	continue;
	if(b<=0||c<=0||d<=0)
	continue;
	else
	{
		l=1;
		break;
	}
}
if(l==0)
printf("-1");
if(l==1)
{
printf("%d %d\n",a,b);
	printf("%d %d",c,d);
}
return 0;
}