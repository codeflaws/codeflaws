#include <stdio.h>

int main(int argc, char *argv[])
{
	long long a, b ,n;
	scanf("%lld %lld %lld", &a, &b, &n);
	if (a + b <= n && (n - a - b) % 2 == 0  || (a + b) % 2 != 0 && n % 2 != 0 && n >= a + b)
	{
		printf("%s\n", "Yes");
		return 0;
	}
	printf("%s\n", "No");
	return 0;
}