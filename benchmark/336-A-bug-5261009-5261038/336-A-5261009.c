#include<stdio.h>
int main(int argc, char *argv[])
{
	int x,y,z;
	scanf("%i%i",&x,&y);
	z=(x<0?-x:x)+(y<0?-y:y);
	if(x>0)
	{
		if(y>0)printf("0 %i %i 0\n",z,z);
		else printf("0 %i %i 0",z,-z);
	}
	else
	{
		if(y>0)printf("%i 0 0 %i\n",-z,z);
		else printf("%i 0 0 %i\n",-z,-z);
	}
	return 0;
}
