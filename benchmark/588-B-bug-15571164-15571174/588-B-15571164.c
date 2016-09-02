#include <stdio.h>
long long int x,i;
int main(int argc, char *argv[])
{
scanf("%lld",&x);                                                                                                                               
		for (i=100000; i>=2 ; i--)
		{
			while (x%(i*i)==0)
			x=x/i;
		}	
			
		printf("%lld",x);
return 0;
}
