#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[1001] = { 0 };
	int n, tmp;
	scanf("%d", &n);

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &tmp);
		++(a[tmp]);

		if (a[tmp] > a[max])
			max = tmp;
	}

	
	

	printf("%d", max);
	return 0;
	
	
	
}