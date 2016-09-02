#include <stdio.h>

int main(int argc, char const *argv[])
{
	int k;
	int i;
	char temp;
	int timing[9] = {0};

	scanf("%d\n", &k);

	for (i = 0; i < 16; ++i)
	{
		scanf("\n%c", &temp);
		if (temp != '.')
		{
			timing[temp - '0'-1]++;
		}
	}

	for (i = 0; i <10; ++i)
	{
		//printf("%d\n",timing[i] );
		if (timing[i] > (2 * k))
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}