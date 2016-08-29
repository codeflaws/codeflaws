#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	
	scanf("%d", &n);
	printf("%d\n", (int) (1 + 12 * (long long) n * (n - 1)));

	return 0;
}
