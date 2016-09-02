#include <stdio.h>
#include <string.h>

void rotate(char *s, int n, int k) {
	char t[10000];

	memcpy(t, s + n - k, k);
	memcpy(t + k, s, n - k); 
	memcpy(s, t, n);
}

int main(int argc, char *argv[]) {
	char s[10000];
	int m, l, r, k;

	scanf("%s", s);
	scanf("%d", &m);
	while (m-- > 0) {
		scanf("%d%d%d", &l, &r, &k);
		l--;
		rotate(s + l, r - l, k);
	}
	printf("%s\n", s);
return 0;
}
