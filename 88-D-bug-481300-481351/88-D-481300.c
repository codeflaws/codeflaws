#include <stdio.h>
#include <string.h>

typedef struct {
    char c[30];
    int n;
} type;

int main(int argc, char *argv[])
{
    int n, p = 0, i, j, k;
    char s1[10], s2[50], s3[30];
    type t[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
	scanf("%s", s1);

	if (strcmp(s1, "typedef") == 0) {
	    int x = 0, y = 0, a = 0, b = 0;
	    char c[30];

	    scanf("%s %s", s2, s3);

	    while (s2[x] == '&') x++;
	    a = x;
	    while (s2[x] != '*' && s2[x] != '\0') c[y++] = s2[x++];
	    c[y] = '\0';
	    while (s2[x] == '*') {
		x++; b++;
	    }

	    if (strcmp(c, "void") == 0) {
		for (j = 0; j < p; j++) {
		    if (strcmp(t[j].c, s3) == 0) {
			t[j].n = b - a;
			break;
		    }
		}
		if (j == p) {
		    strcpy(t[p].c, s3);
		    t[p++].n = b - a;
		}
	    } else if (strcmp(c, "errtype") == 0) {
		for (j = 0; j < p; j++) {
		    if (strcmp(t[j].c, s3) == 0) {
			t[j].n = -1;
			break;
		    }
		}
		if (j == p) {
		    strcpy(t[p].c, s3);
		    t[p++].n = -1;
		}
	    } else {
		for (j = 0; j < p; j++) {
		    if (strcmp(t[j].c, c) == 0) break;
		}

		for (k = 0; k < p; k++) {
		    if (strcmp(t[k].c, s3) == 0) break;
		}

		if (t[j].n < 0) {
		    t[k].n = -1;
		} else {
		    t[k].n = t[j].n + b - a;
		}

		if (k == p) strcpy(t[p++].c, s3);
	    }
	} else {
	    int x = 0, y = 0, a = 0, b = 0;
	    char c[30];

	    scanf("%s", s2);

	    while (s2[x] == '&') x++;
	    a = x;
	    while (s2[x] != '*' && s2[x] != '\0') c[y++] = s2[x++];
	    c[y] = '\0';
	    while (s2[x] == '*') {
		x++; b++;
	    }

	    if (strcmp(c, "void") == 0) {
		if (b - a >= 0) {
		    printf("void");
		    while (b - a > 0) {
			putchar('*'); b--;
		    }
		    puts("");
		} else {
		    puts("errtype");
		}
	    } else if (strcmp(c, "errtype") == 0) {
		puts("errtype");
	    } else {
		for (j = 0; j < p; j++) {
		    if (strcmp(t[j].c, c) == 0) break;
		}

		if (j == p || t[j].n < 0 || t[j].n + b - a < 0) {
		    puts("errtype");
		} else {
		    printf("void");
		    while (t[j].n + b - a > 0) {
			putchar('*'); b--;
		    }
		    puts("");
		}
	    }
	}
    }

    return 0;
}
