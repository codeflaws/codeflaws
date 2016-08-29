#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int highest_digit(int n)
{
	int max = n % 10;

	while (n > 0) {
		n /= 10;
		if (n % 10 > max)
			max = n % 10;
	}

	return max;
}

int sum_base(int n1, int n2, int base)
{
	int d, pow = 1, carry = 0, n = 0;

	while (n1 > 0 || n2 > 0) {
		d = (carry + n1 % 10 + n2 % 10);
		carry = d / base;
		d %= base;
		n += d * pow;
		pow *= 10;
		n1 /= 10;
		n2 /= 10;
	}
	n += carry * pow;

	return n;
}

int main(int argc, char *argv[])
{
	int l = 0, n, n1, n2, base;

	scanf("%d %d", &n1, &n2);

	base = MAX(highest_digit(n1), highest_digit(n2)) + 1;
	n = sum_base(n1, n2, base);
	while (n > 0) {
		l++;
		n /= base;
	}

	printf("%d\n", l);
	return 0;
}
