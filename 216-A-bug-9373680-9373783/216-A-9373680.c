#include<stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a + b + c - 2;
	printf("%d", (sum + sum - 2) + (sum + sum - 2) / 2);
	return 0;
}
