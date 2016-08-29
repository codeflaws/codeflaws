#include <stdio.h>
int main(int argc, char *argv[])
{
	long a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	if(c == 0)
	{
		a == b ? printf("YES\n") : printf("NO\n");
		return 0;
	}

	if((b-a)%c == 0 &&  (c > 0 ? b > a : b < a) )
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}