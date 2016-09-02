#include <stdio.h>
#include <string.h>

int match(char *s, char *p) {
	// printf("s = %s p = %s\n", s, p);
	
	int i, k, n, l[100000];
	l[0] = 0; k = 0; n = strlen(p);
	for (i = 1; i < n; i++) {
		while (k > 0 && p[k] != p[i])
			k = l[k-1];
		if (p[k] == p[i])
			k++;
		l[i] = k;
		// printf("i = %d -> %d\n", i+1, k);
	}

	k = 0; 
	int m = strlen(s);
	for (i = 0; i < m; i++) {
		while (k > 0 && p[k] != s[i])
			k = l[k-1];
		if (p[k] == s[i])
			k++;

		// printf("i = %d -> %d\n", i+1, k);

		if (k == n)
			return n;
	}

	return k;
}

int m = 1000000000;

void check(char *s1, char *s2, char *s3) {
	char *s = s1;

	int c = match(s, s2);
	strcat(s, s2 + c);
	c = match(s, s3);
	strcat(s, s3 + c);

	int l = strlen(s);
	if (l < m)
		m = l;
}

int main(int argc, char *argv[]) {
	char s1[100001], s2[100001], s3[100001];
	gets(s1); gets(s2); gets(s3);

	check(s1, s2, s3);
	check(s1, s3, s2);
	check(s2, s1, s3);
	check(s2, s3, s1);
	check(s3, s1, s2);
	check(s3, s2, s1);

	printf("%d\n", m);

	return 0;
}
