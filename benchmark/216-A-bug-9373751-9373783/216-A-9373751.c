#include<stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (c + 1) * (b + 1) - 2);
	return 0;
}
