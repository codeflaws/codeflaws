#include <stdio.h>

int remove_zeros (int n)
{
	int k = 0;
	int pw = 1;
	while (n)
	{
		k += (n % 10) * pw;
		if (n % 10)
		{
			pw *= 10;
		}
		n /= 10;
	}
	return (k);
}

int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("remove_zeros(a + b) %d\n", remove_zeros(a + b));
	printf("(remove_zeros(a) + remove_zeros(b)) %d\n", (remove_zeros(a) + remove_zeros(b)));
	if (remove_zeros(a + b) == (remove_zeros(a) + remove_zeros(b)))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}