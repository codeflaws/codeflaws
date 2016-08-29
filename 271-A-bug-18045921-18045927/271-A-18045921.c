#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,a,b,c,d;
	scanf("%d",&n);
	if (n<=9000 && n>=1000)
	for (n; n<=10000; n++)
	{
		a=n/1000;
		b=(n-a*1000)/100;
		c=(n-a*1000-b*100)/10;
		d=(n-a*1000-b*100-c*10);
		if ( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			printf("%d",n);
			break;
		}
	}
	return 0;
}
