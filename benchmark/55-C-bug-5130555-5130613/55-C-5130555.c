#include <stdio.h>

int n, m, k;

int ok(int x, int y) {
	if (x<=4 || y<=4 || n-x<4 || m-y<4)
		return 1;

	return 0;
}

int main(int argc, char *argv[]) {
	while (~scanf("%d %d %d", &n, &m, &k)) {
		int i, flag = 0;
		for (i=0; i<k ;i++) {
			int x, y;
			scanf("%d %d", &x, &y);
			if (ok(x, y))
				flag = 1;
		}

		if (flag)
			puts("YES");
		else
			puts("NO");
	}

	return 0;
}
