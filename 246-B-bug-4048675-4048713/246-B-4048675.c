#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, ai, Sa = 0;
	scanf ("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf ("%d", &ai);
		Sa += ai;
	}
	printf ("%d\n", n - Sa % n);
	exit (EXIT_SUCCESS);
return 0;
}
