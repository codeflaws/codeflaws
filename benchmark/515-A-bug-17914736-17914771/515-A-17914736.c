#include<stdio.h>
int main(int argc, char *argv[])
{
	long int a,b,s,i,j,k;
	scanf("%ld %ld %ld",&a,&b,&s);
	if(a < 0) a = -a; if(b < 0) b = -b;
	if(a+b == 0) 
	{
		if(s % 2 == 0) printf("Yes\n");
		else printf("No\n");
	}
	else
	{
		if(s % ( a + b) == 0 ) printf("Yes\n");
		else
		{
			if(s >= a+b)
			{
				s = s%(a+b);
				if(s % 2 == 0) printf("Yes\n");
				else printf("No\n");
			}
			else printf("No\n");
		}
	}
	return(0);
}
