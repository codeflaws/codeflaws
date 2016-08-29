#include <stdio.h>

int main(int argc, char *argv[])
{
	int index = 0;
	scanf("%d", &index);

	char str[4000] = {};
	int len = 0;
	int i = 0;
	int j = 0;
	int h = 0;

	for (i = 0; i < 4000; i++)
	{
		j = i;
		len = 0;
		while (j > 0)
		{
			j = j / 10;
			len++;
		}

		if (h < 3990)
		{
			sprintf(str + h, "%d", i);
		}
		h = h + len;
	}

	printf("%c\n", str[index - 1]);
	for (i = 0; i < 30; i++) printf("%c ", str[i]);
	scanf("%d", &index);
	return 0;
}