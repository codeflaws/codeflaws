#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int n, m, x, q, c = 0, r = 0, i, j, k;
    char s[30][31], p;
    int a[26] = {0};
    int b[900][2];

    scanf("%d %d %d", &n, &m, &x);

    for (i = 0; i < n; i++) scanf("%s", s[i]);

    for (i = 0; i < n; i++) {
	for (j = 0; j < m; j++) {
	    if (s[i][j] == 'S') {
		b[r][0] = i; b[r++][1] = j;
	    } else {
		a[s[i][j] - 'a'] = 1;
	    }
	}
    }

    for (i = 0; i < n; i++) {
	for (j = 0; j < m; j++) {
	    if (a[s[i][j] - 'a'] == 2) continue;

	    for (k = 0; k < r; k++) {
		if ((b[k][0] - i) * (b[k][0] - i) + (b[k][1] - j) * (b[k][1] - j) <= x * x) {
		    a[s[i][j] - 'a'] = 2; break;
		}
	    }
	}
    }

    scanf("%d%*c", &q);

    for (i = 0; i < q; i++) {
	scanf("%c", &p);

	if (islower(p)) {
	    if (a[p - 'a'] == 0) {
		puts("-1");
		return 0;
	    }
	} else {
	    if (r == 0 || a[p - 'A'] == 0) {
		puts("-1");
		return 0;
	    } else {
		if (a[tolower(p) - 'a'] == 1) c++;
	    }
	}
    }

    printf("%d\n", c);

    return 0;
}
