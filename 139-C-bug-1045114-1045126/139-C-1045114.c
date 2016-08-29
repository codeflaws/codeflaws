#include <stdio.h>
#include <string.h>

int k;

char *suffix(char *s) {
	int l = strlen(s);

	int i, j = k;
	for (i = l - 1; i >= 0; i--) {
		char c = s[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			j--;
			if (j == 0)
				break;
		}
	}

	if (i == -1)
		return NULL;
	return s + i;
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d%d\n", &n, &k);

	int i;
	char *cr = NULL;
	for (i = 0; i < n; i++) {
		int j;
		char s[4][10001];
		for (j = 0; j < 4; j++)
			gets(s[j]);

		for (j = 0; j < 4; j++) {
			char *ss = suffix(s[j]);
			if (ss == NULL) {
				puts("NO");
				return 0;
			}
			strcpy(s[j], ss);
		}
		char *r;
		if (!strcmp(s[0], s[1]) && !strcmp(s[1], s[2]) && !strcmp(s[2], s[3]))
			r = "aaaa";
		else if (!strcmp(s[0], s[1]) && !strcmp(s[2], s[3]))
			r = "aabb";
		else if (!strcmp(s[0], s[2]) && !strcmp(s[1], s[3]))
			r = "abab";
		else if (!strcmp(s[0], s[3]) && !strcmp(s[1], s[2]))
			r = "abba";
		else {
			puts("NO");
			return 0;
		}

		if (cr == NULL)
			cr = r;
		else if (!strcmp(cr, "aaaa"))
			cr = r;
		else if (!strcmp(r, "aaaa"))
			;
		else {
			puts("NO");
			return 0;
		}
	}

	puts(cr);

	return 0;
}
