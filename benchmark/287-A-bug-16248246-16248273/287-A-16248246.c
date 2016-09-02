#include <stdio.h>
#include <ctype.h>

#define N		 4
#define BLACK	'a'
#define WHITE	'.'



int main(int argc, char *argv[])
{
	char a[N][N];
	int i, j, bc, wc;

	for (i=0; i<N; ++i)
		for (j=0; j<N; ++j) {
			while (isspace(a[i][j] = getchar()))
				;
			if ((i>0) && (j>0)) {
				bc = (a[i][j]==BLACK) + (a[i-1][j]==BLACK) + (a[i][j-1]==BLACK) + (a[i-1][j-1]==BLACK);
				wc = (a[i][j]==WHITE) + (a[i-1][j]==WHITE) + (a[i][j-1]==WHITE) + (a[i-1][j-1]==WHITE);
				if ((bc>2) || (wc>2)) {
					puts("YES");
					goto EXIT;
				}
			}
		}
	
	puts("NO");
EXIT:
	return 0;
}