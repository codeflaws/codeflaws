#include <stdio.h>

int main(int argc, char *argv[]) {
	char s[100];
	gets(s);

	char *t = s;
	int h = 0, m = 0;

	int b, c = 0;
	for (b = 1; b <= 36; b++) {
		if (b == 1)
			b = 61;

		char *t = s;
		int h = 0, m = 0;
		int f = 0;
		while (*t != ':') {
			if ('0' <= *t && *t <= '9') {
				if(*t - '0' >= b)
					f = 1;
			} else
				if (*t - 'A' + 10 >= b)
					f = 1;

			h *= b;
			if ('0' <= *t && *t <= '9')
				h += *t - '0';
			else
				h += *t - 'A' + 10;
			t++;
		}
		t++;
		while (*t != 0) {
			if ('0' <= *t && *t <= '9') {
				if(*t - '0' >= b)
					f = 1;
			} else
				if (*t - 'A' + 10 >= b)
					f = 1;

			m *= b;
			if ('0' <= *t && *t <= '9')
				m += *t - '0';
			else
				m += *t - 'A' + 10;
			t++;
		}

		// printf("b = %d h = %d, m = %d\n", b, h, m);

		if (b == 61) {
			if (!f && 0 <= h && h <= 23 && 0 <= m && m <= 59) {
				puts("-1");
				return 0;
			}
			b = 1;
			continue;
		}

		if (!f && 0 <= h && h <= 23 && 0 <= m && m <= 59) {
			printf("%d ", b);
			c++;
		}
	}

	if (c == 0)
		puts("0");

	putchar('\n');

	return 0;
}
