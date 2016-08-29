#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	short n1,n2,n3;
	scanf("%d%d%d",&a,&b,&c);
	n1=sqrt((a*b)/c)*4;
	n2=sqrt((a*c)/b)*4;
	n3=sqrt((c*b)/a)*4;
	printf("%d",(n1+n2+n3));
	
return 0;
}