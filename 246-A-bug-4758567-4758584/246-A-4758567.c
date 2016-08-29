#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;

	scanf("%d", &n);
	if (n <= 2)
		printf("-1");
	else
	{
		n++;
		while (n--)
			printf("%d ", n);
	}
	return 0;
}


