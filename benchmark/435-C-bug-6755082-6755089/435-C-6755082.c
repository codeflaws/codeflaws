#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

char ans[1024][1024];
int a[1024];

int main(int argc, char *argv[])
{
	int n, i, x, y, t, max;

	memset(ans, ' ', sizeof(ans));
	scanf("%d", &n);
	max = t = y = 0;
	for (i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		t += (i&1)? a[i] : -a[i];
		t>y? y=t : 0;
		t<max? max=t : 0;
		a[i] += a[i-1];
	}
	max = -max+y;
	printf("%d\n", y);
	x = 0;
	for (i=1; i<=n; i++)
		if ((i&1))
			for (y--; x < a[i]; x++)
				ans[y--][x] = '/';
		else
			for (y++; x < a[i]; x++)
				ans[y++][x] = '\\';
	for (i=0; i<=max; i++) {
		ans[i][x] = '\0';
		puts(ans[i]);
	}

	return 0;
}
