#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, x=0 , y=0 , z=0;
	scanf("%d %d %d", &a, &b, &c);
	x = c/a;
	while(x!=0)
	{
		y=0;
		while(a*x+b*y<=c)
		{
			if(a*x+b*y==c)
			{
			z=1;
			break;
			}
			y++;
		}
		if(z==1)
		break;
		x--;

	}
	if(z==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
