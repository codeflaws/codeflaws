#include <stdio.h>
#include <string.h>
#define MAXKINGS 500010

int max (int a, int b);

char dynasty[MAXKINGS][12];
int M[30][30];
int main(int argc, char *argv[]) {
	int i, j, k, n, ini, fim, length, maximum;
	
	scanf ("%d", &n);
	for (i = 0; i < n; i++)
		scanf ("%s", dynasty[i]);
	
	for (i = 0; i < 30; i++)
		for (j = 0; j < 30; j++)
			M[i][j] = 0;
	
	for (k = 0; k < n; k++) {
		ini = dynasty[k][0] - 'a';
		length = strlen(dynasty[k]);
		fim = dynasty[k][length-1] - 'a';
		for (i = 0; i < 30; i++)
			if (M[i][ini] > 0)
				M[i][fim] = max(M[i][ini]+length, M[i][fim]);
		M[ini][fim] = max(length, M[ini][fim]);
	}
	
	maximum = 0;
	for (i = 0; i < 30; i++)
		if (maximum < M[i][i])
			maximum = M[i][i];
	
	printf ("%d\n", maximum);

	return 0;
}

int max (int a, int b) {
	if (a > b)
		return a;
	return b;
}
