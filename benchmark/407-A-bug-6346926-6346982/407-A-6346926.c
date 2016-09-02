#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a;
	int b;

	double x;
	double y;

	int xa;
	int ya;
	int xb = -1001;
	int yb;

	int i;

	scanf("%d %d", &a, &b);

	for(xa = 1; xa < a; ++xa)
	{
		y = sqrt((double)a*a-xa*xa);
		ya = y;
		if(y-ya == 0)
		{
			y = sqrt((double)(b*b*xa*xa)/(xa*xa+ya*ya));
			yb = y;
			if(yb == ya)continue;
			if(y-yb == 0)
			{
				x = -(double)ya*yb/xa;
				xb = x;
				if(x - xb == 0)
				{
					break;
				}
			}
		}
	}
		

	if(xb != -1001)
	{
		printf("YES\n");
		printf("0 0\n");
		printf("%d %d\n",xa,ya);
		printf("%d %d\n",xb,yb);
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}