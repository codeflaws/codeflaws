#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i, j, len;
	char s[10000];
	gets(s);
	len = strlen(s);
	for (i = 0; i < len; i++)
		if (s[i] != ' ') {
			printf("%c", s[i]);
			if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')
				printf(" ");	
		}
		else
			if (i + 1 < len && isalpha(s[i + 1]))
				printf(" ");
	printf("\n");
	return 0;
}
