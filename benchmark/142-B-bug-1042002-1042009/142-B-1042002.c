#include <stdio.h>
int solve(int, int);

int main(int argc, char *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d\n", solve(n, m));
	return 0;
}
int solve(int n, int m)
{
	if (n > m)
		return solve(m, n);
	if (n == 1)
		return n*m;
	else
		if (n == 2)
			return 2*(2*(m / 4) + (m % 4 > 2)? 2 : (m % 4));
		else
			if (n*m % 2)
				return n*m / 2 + 1;
			else
				return n*m / 2;
}

	
