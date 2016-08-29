#include <stdio.h>
#include <string.h>

enum DIRECTION {LEFT, RIGHT};

void copy_interval(char* s, char* t, int l, int r)
{
	char* p = s + l - 1;
	char* q = s + r - 1;
	while (p <= q) {
		*t++ = *p++;
	}
	*t = 0;
}

void output_result(int* hash)
{
	int i;
	for (i = 0; i < 10; i++) printf("%d%c", hash[i], i < 9 ? ' ' : '\n');
}

void erase_zero(char* cp)
{
	while (*cp) {
		cp[0] = cp[1];
		cp++;
	}
}

int main(int argc, char *argv[])
{
	int n, q, l, r, dp, len;
	int hash[10];
	char s[128], t[128];
	char* cp, *xp;
	while (scanf("%d%d", &n, &q) != EOF) {
		scanf("%s", s);
		while (q--) {
			memset(hash, 0, sizeof(hash));
			scanf("%d%d", &l, &r);
			copy_interval(s, t, l, r);
			cp = t;
			dp = RIGHT;
			len = r - l;
			while (len >= 0 && cp >= t && cp <= t + len) {
				if (*cp >= '0' && *cp <= '9') {
					hash[*cp - '0']++;
					xp = cp;
					if (dp == RIGHT) cp++;
					else cp--;
					if (cp < t || cp > t + len) break;
					if (*xp == '0') {
						erase_zero(xp);
						len--;
					} else {
						(*xp)--;
					}
				} else {
					if (*cp == '<') dp = LEFT;
					else dp = RIGHT;
					xp = cp;
					if (dp == LEFT) cp--;
					else cp++;
					if (cp < t || cp > t + len) break;
					if (*cp == '<' || *cp == '>') {
						erase_zero(xp);
						len--;
					}
				}
			}
			output_result(hash);
		}
	}
	return 0;
}

