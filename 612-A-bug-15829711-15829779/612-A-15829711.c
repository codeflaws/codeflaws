#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char str[100];
	int p, q, n, i, j = 0, l, k;
	scanf("%d%d%d", &n, &p, &q);
	scanf("%s", str);
	for (i = 0; i < n; i++) {
		if (n - (q * i) > -1 && (n - (q * i)) % p == 0) {
			break;
		}
	}
	if (i == n)
		printf("-1");
	else {
		while (j < i * q) {
			for (k = 0; k < q; k++) {
				printf("%c", str[j]);
				j++;
			}
			printf("\n");
		}

		while (str[j] != '\0') {
			for (k = 0; k < p; k++) {
				printf("%c", str[j]);
				j++;
			}
			printf("\n");
		}
	}
	return 0;
}
