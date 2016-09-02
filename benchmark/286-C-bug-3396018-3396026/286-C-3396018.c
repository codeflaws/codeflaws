#include <stdio.h>

int a[1111111];
int x[1111111]; // 右括号栈
int n;

int main(int argc, char *argv[]) {
	int i, j, t = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) scanf("%d", a + i);
	for (scanf("%d", &i); i; --i) {
		scanf("%d", &j);
		a[j] = -a[j];
	}

	x[0] = 0;
	for (j = n; j; --j)
		if (a[j] < 0) x[++t] = a[j];
		else if (a[j] != x[t]) x[++t] = a[j], a[j] = -a[j];
		else --t;
	if (t) puts("NO");
	else {
		puts("YES");
		for (i = 1; i <= n; ++i) printf("%d ", a[i]);
	}
	return 0;
}