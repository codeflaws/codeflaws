#include <stdio.h>
#include <string.h>

int min(int a, int b)
{
    if (a < b) {
	return a;
    } else {
	return b;
    }
}

int main(int argc, char *argv[])
{
    int n, m, p = 0, num = -1, i, j;
    char s[100001];
    char c1[100001], c2[100001];
    int a[10] = {0};
    int b[10] = {0};

    scanf("%s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {
	a[s[i] - '0']++;
	b[s[i] - '0']++;
    }

    c1[n] = c2[n] = '\0';

    n--;

    for (i = 0; i < a[0] - a[9]; i++) {
	c1[n - i] = c2[n - i] = '0';
    }

    if (a[0] > a[9]) {
	n -= a[0] - a[9];

	a[0] = b[0] = a[9];
    }

    for (i = 1; i <= 5; i++) {
	int c = 1;

	a[i]--;
	b[10 - i]--;

	if (a[i] < 0 || b[10 - i] < 0) {
	    a[i]++;
	    b[10 - i]++;

	    continue;
	}

	for (j = 0; j < 5; j++) {
	    c += min(a[j], b[9 - j]);
	}

	if (c > p) {
	    p = c;
	    num = i;
	}

	a[i]++;
	b[10 - i]++;
    }

    if (num > 0) {
	if (num == 1 && a[0] > 0) {
	    c1[n] = '0';
	    c2[n--] = '0';

	    a[0]--;
	    b[0]--;
	}

	c1[n] = num + '0';
	c2[n--] = 10 - num + '0';

	a[num]--;
	b[10 - num]--;
    }

    for (i = 0; i < 10; i++) {
	while (1) {
	    if (a[i] > 0 && b[9 - i] > 0) {
		c1[n] = i + '0';
		c2[n--] = 9 - i + '0';

		a[i]--;
		b[9 - i]--;
	    } else {
		break;
	    }
	}
    }

    m = n;

    for (i = 0; i < 10; i++) {
	for (j = 0; j < a[i]; j++) {
	    c1[n--] = i + '0';
	}
	for (j = 0; j < b[i]; j++) {
	    c2[m--] = i + '0';
	}
    }

    printf("%s\n", c1);
    printf("%s\n", c2);

    return 0;
}
