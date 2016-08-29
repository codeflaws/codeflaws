#include <stdio.h>
#include <string.h>

const int inf  = 1 << 30;

int f[110][55][2];
char s[110];

#define max(a, b) (a > b ? a : b)

int main(int argc, char *argv[]) {
	int n, m, i, j, c, k;
	scanf("%s %i", s, &m);

	n = strlen(s);

	for( i = 0; i < n; i++ )
		s[i] = (s[i] == 'F') ? 0 : 1;
	
	/*for( i = 0; i < n; i++) 
		printf("%i", s[i]);
	puts("");*/
	
	for( i = 0; i < 110; i++ )
		for( j = 0; j < 55; j++ )
			f[i][j][0] = f[i][j][1] = -inf;

	f[n][0][0] = f[n][0][1] = 0;
	for( i = n-1; i >= 0; i-- )
		for( j = m; j >= 0; j-- )
			for( k = 0; k < 2; k++ ) {
				f[i][j][k] = -inf;
				
				int sign = (k == 0) ? 1 : -1;
				for( c = 0; c <= j; c++ ) {
					int new_c = (c % 2) ? s[i] ^ 1 : s[i], cost;

					if( new_c == 0 ) cost = sign;
					else			 cost = 0;
					
					int new_k = (new_c == 1) ? k ^ 1 : k;
					f[i][j][k] = max(f[i][j][k], f[i+1][j-c][new_k] + cost);
				}
			}
	
	printf("%i\n", max(f[0][m][1],f[0][m][0]));
	
	
	return 0;
}
