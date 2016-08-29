//codeforces 268c 
//#define NDEBUG
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <assert.h>

#define MAXN (100 + 1)

int M, N;
int main(int argc, char *argv[])
{
	scanf("%d%d", &M, &N);
	int ans;
	ans = M < N? M : N;
	++ans;
	int i;

	printf("%d\n", ans);
	for (i = ans - 1; i >= 0; --i)
		printf("%d %d\n", ans - i, i);


	return 0;
}


