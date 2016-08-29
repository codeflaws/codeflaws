#include <stdio.h>

int is_lucky (int n)
{
	int k;
	while (n != 0)
	{
		k = n % 10;
		n = n / 10;
		if (k == 8)
		{
			return (1);
		}
	}
	return(0);
}
int main(int argc, char const *argv[])
{
	int a, b = 1;

	scanf("%d", &a);
	a++;
	while (!is_lucky(a))
	{
		b++;
		a++;
	}
	printf("%d", b);

	return 0;
}