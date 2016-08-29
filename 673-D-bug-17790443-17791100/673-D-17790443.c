#include <stdio.h>
#include <stdlib.h>

int vet[1010];

int ordem[1010];
int main(int argc, char *argv[]) {
	
	int n, k;
	int a, b, c, d;
	
	int i, j;
	
	scanf("%d %d", &n, &k);
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (n < 5 || n + 1 > k) {
		printf("-1\n");
		return 0;
	}
	
	vet[a] = 1;
	vet[b] = 1;
	
	
	ordem[0] = a;
	j = 1;
	for (i = 1; i < n - 1; i++) {
		
		if (i == 1) {
			ordem[i] = c;
			vet[c] = 1;
		} else if (i == 3) {
			ordem[i] = d;
			vet[d] = 1;
		} else {
		
			while (vet[j]) j++;
			ordem[i] = j;
			vet[j]++;
			j++;
		}
	}
	ordem[i] = b;
	
	for (i = 0; i < n; i++) {
		printf("%d ", ordem[i]);
	}
	printf("\n");
	printf("%d %d %d %d ", c, a, ordem[2], b);
	for (i = n - 2; i >= 3; i--) {
		printf("%d ", ordem[i]);
	}
	printf("\n");
	
	return 0;
	
}
