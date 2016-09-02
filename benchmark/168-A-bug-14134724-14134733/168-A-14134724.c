#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,x,y;
	int people_required = 0;
	int result = 0;
	scanf("%d",&n);
	scanf("%d",&x);
	scanf("%d",&y);
	double fraction = (y/100.0);
	fraction *=n;
	people_required = (int)fraction;
	result = people_required -x;
	if(result<0)
	{
		printf("%d",0);
	}
	else
	{
		printf("%d",result);
	}
	return 0;
}
