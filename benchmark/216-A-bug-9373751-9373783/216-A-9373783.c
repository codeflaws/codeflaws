#include<stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a - 1) * (b + c - 1) + b * c);
	return 0;
}
