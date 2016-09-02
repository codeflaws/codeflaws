#include <stdio.h>
#include <string.h>

void rev(char *s) {
	int l = 0, r = strlen(s) - 1;
	while (l < r) {
		int c = s[l]; s[l] = s[r]; s[r] = c;
		l++; r--;
	}
}

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
	//	printf("i = %d k = %d\n", i, k);
	}

	int p1[100000];
	memset(p1, -1, sizeof(p1));

	k = 0; 
	int m = strlen(s);
	for (i = 0; i < m; i++) {
		while (k > 0 && p[k] != s[i])
			k = l[k-1];
		if (p[k] == s[i])
			k++;

		if (k == n)
			return 1;

//		printf("i = %d k = %d\n", i, k);
		if (p1[k] == -1 || i < p1[k])
			p1[k] = i;
	}

	for (i = n-1; i > 0; i--)
		if (p1[i] != -1 && (p1[l[i]] == -1 || p1[i] < p1[l[i]]))
			p1[l[i]] = p1[i];

	s = strdup(s); p = strdup(p);
	rev(s); rev(p);
//	puts("revvvvvv");

	l[0] = 0; k = 0; n = strlen(p);
	for (i = 1; i < n; i++) {
		while (k > 0 && p[k] != p[i])
			k = l[k-1];
		if (p[k] == p[i])
			k++;
		l[i] = k;
//		printf("i = %d k = %d\n", i, k);
	}

	int p2[100000];
	memset(p2, -1, sizeof(p2));

	k = 0; 
	m = strlen(s);
	for (i = 0; i < m; i++) {
		while (k > 0 && p[k] != s[i])
			k = l[k-1];
		if (p[k] == s[i])
			k++;

		if (k == n)
			return 1;

	//	printf("i = %d k = %d\n", i, k);
		if (p2[k] == -1 || i < p2[k])
			p2[k] = i;
	}

	for (i = n-1; i > 0; i--)
		if (p2[i] != -1 && (p2[l[i]] == -1 || p2[i] < p2[l[i]]))
			p2[l[i]] = p2[i];

	for (i = 1; i <= n-1; i++) {
		// printf("cmp: i = %d %d %d\n", i, p1[i], p2[n-i]);
		if (p1[i] != -1 && p2[n-i] != -1 && p1[i] < m-1-p2[n-i])
			return 1;
	}
	return 0;
}


int main(int argc, char *argv[]) {
	char s[100001];
	gets(s);

	int m;
	scanf("%d\n", &m);

	int i, c = 0;
	for (i = 0; i < m; i++) {
		char t[1001];
		gets(t);

		if (strlen(t) == 1)
			continue;

		if (match(s, t))
			c++;
	}

	printf("%d\n", c);

	return 0;
}
