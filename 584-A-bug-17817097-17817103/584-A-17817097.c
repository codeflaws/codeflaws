
#include <stdio.h>

int main(int argc, char *argv[])

{
	int n;
	int t;
	int i;

	scanf ("%d %d", &n, &t);

	if (t == 10) {
		if (n == 1) {
			printf ("-1");
			return 0;
		} else {
			printf ("1");
			for (i = 1; i < t; i++) {
				printf ("0");
			}
		}
	} else {
		for (i = 0; i < n; i++) {
			printf ("%d", t);
		}
	}	
	
	return 0;
}

