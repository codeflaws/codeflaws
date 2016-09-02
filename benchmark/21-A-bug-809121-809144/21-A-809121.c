#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int p, i, j;
    char s[101];

    scanf("%s", s);

    for (i = 0; i < strlen(s); i++) {
	if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '_') continue;

	if (s[i] == '@') break;

	puts("NO");

	return 0;
    }

    if (i == 0 || i > 16 || s[i + 1] == '\0') {
	puts("NO");

	return 0;
    }

    p = i;

    for (i++; i < strlen(s); i++) {
	for (j = i; j < strlen(s); j++) {
	    if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9') || s[j] == '_') continue;

	    if (s[j] == '.' || s[j] == '/' || s[j] == '\0') break;

	    puts("NO");

	    return 0;
	}

	if (j == i || j - i > 16) {
	    puts("NO");

	    return 0;
	}

	i = j;

	if (s[i] != '.') break;
    }

    if (i - p > 32 || (s[i] == '\0' && s[i - 1] == '.')) {
	puts("NO");

	return 0;
    }

    p = i + 1;

    if (s[i] == '/') {
	for (i++; i < strlen(s); i++) {
	    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '_') continue;

	    if (s[i] == '\0') break;

	    puts("NO");

	    return 0;
	}

	if (i == p || i - p > 16) {
	    puts("NO");

	    return 0;
	}
    }

    puts("YES");

    return 0;
}
