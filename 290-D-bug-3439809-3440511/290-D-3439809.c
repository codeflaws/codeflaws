#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	char line[64], *p;
	int thresh;
	if (scanf("%s %d", line, &thresh) == 2)
	{
		for (p = line; *p; ++p)
		{
			if (*p < thresh + 'a') *p = toupper(*p);
		}
		printf("%s\n", line);
	}
	return 0;
}
