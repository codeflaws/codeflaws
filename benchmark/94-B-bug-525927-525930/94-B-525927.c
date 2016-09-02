#include <stdio.h>

int main(int argc, char *argv[])
{
		int a[5][5] = {};

		int m, i, j, k;
		scanf("%d", &m);
		while(--m)
		{
			scanf("%d%d", &i, &j);
			--i;
			--j;
			a[i][j] = a[j][i] = 1;
		}

		int win = 0;
		for (i = 0; i < 5; ++i)
			for (j = 0; j < i; ++j)
				for (k = 0; k < j; ++k)
					if (a[i][j] == 1 && a[j][k] == 1 && a[k][i] == 1 || a[i][j] == 0 && a[j][k] == 0 && a[k][i] == 0)
					{
						win = 1;
						goto end;
					}
		end:
		if (win)
			puts("WIN\n");
		else
			puts("FAIL\n");

		return 0;
}
