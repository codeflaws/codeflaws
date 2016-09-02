#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int m, s, i, soma;
	int *min, *max;
	
	scanf ("%d %d", &m, &s);
	
	if (s > m * 9 || (m != 1 && s == 0)) {
		printf ("-1 -1\n");
		return 0; 
	}
	
	min = malloc (m * sizeof (int));
	max = malloc (m * sizeof (int));
	
	for (i = 0; i < m; i++) {
		min[i] = 0;
		max[i] = 0;
	}
	
	i = m - 1;
	min[0] = 1;
	soma = 1;
	
	while (s - soma > 9) { 
		min[i--] = 9;
		soma += 9;
	}
	min[i] += s - soma;
	
	i = 0;
	soma = 0;
	
	while (s - soma > 9) {
		max[i++] = 9;
		soma += 9;
	}
	max[i] += s - soma;
	
	for (i = 0; i < m; i++) printf ("%d", min[i]);
	printf (" ");
	for (i = 0; i < m; i++) printf ("%d", max[i]);
	printf ("\n");
	return 0;
}
