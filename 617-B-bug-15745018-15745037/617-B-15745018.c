#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,x,hole_len=0,flag = 0;
	unsigned long long int posibilities=1;
	scanf("%i",&n);
	while(n--)
	{
		scanf("%i",&x);
		if(x)
		{
			if(flag)
			{
				posibilities *= hole_len+1;
				hole_len = 0;
			}
			else
			{
				hole_len = 0;
				flag = 1;
			}
		}
		else
			++hole_len;
	}
	if(flag)
		printf("%i\n",posibilities);
	else
		printf("0\n");
	return 0;
}