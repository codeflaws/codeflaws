#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,ta,b,tb,h1,h2,h,i,sum=0;
	scanf("%d%d",&a,&ta);
	scanf("%d%d",&b,&tb);
	scanf("%d:%d",&h1,&h2);
	h=60*h1+h2;
	for(i=300;i<1440;i+=b)
	{
		if(i<(h+ta)&&i>=(h-tb))
			sum++;
	}
	printf("%d",sum);
	return 0;
}