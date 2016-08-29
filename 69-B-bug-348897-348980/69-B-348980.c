#include <stdio.h>
int main(int argc, char *argv[]){
	int n, m;
	scanf ("%d%d", &n, &m);
	int x[10000];
	int y[10000];
	int i;
	for (i = 0; i < n; i++) {
		x[i] = 0;
		y[i] = 1000000;
	}
	for (i = 0; i < m; i++) {
		int l, r, t, c;
		scanf ("%d%d%d%d", &l, &r, &t, &c);
		int j;
		for (j = l - 1; j <= r-1; j++) {
			if (y[j] > t) {
				y[j] = t;
				x[j] = c;
			}
		}
	}
	int s = 0;
	for (i = 0; i < n; i++) 
		s += x[i];
	printf ("%d\n", s);
	return 0;
}