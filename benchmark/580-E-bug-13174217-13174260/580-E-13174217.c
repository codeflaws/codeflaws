#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int n, m, k, type, l, r, c, i, j;
char s[100001];


int main(int argc, char *argv[]) {
	scanf("%d%d%d", &n, &m, &k);
	scanf("%s", s);  
        s[n] = '0';
	for (i = 0; i < m + k; ++i) {
		scanf("%d%d%d%d", &type, &l, &r, &c);
		l--; r--;
		if (type == 1) 
			memset(s + l, c + '0', r - l + 1);
		else   puts(!memcmp(s + l, s + l + c, r - l - c) ? "YES" : "NO");
	}
return 0;
}