#include <stdio.h>

int main(int argc, char *argv[])
{
	short x=0;
	long long first,last,z=0;
	
	scanf("%lld",&first);
	scanf("%lld",&last);

//    first=146;
//    last=1913781536;

	z=first;	
	if(last%first==0)
	{
		while(z<last)
		{
		z=z*first;
		x++;
		//printf("Z:%d\n",z);
	}
	if(z==last)
	{
	printf("YES\n");
	printf("%hd",x);
	}
	}
	else
	printf("NO");
	






return 0;
}
		


	