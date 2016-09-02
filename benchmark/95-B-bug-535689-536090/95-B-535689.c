#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXL 100001

int count[MAXL];
char num[MAXL+2];
int least[MAXL+1];
int L;

int main(int argc, char *argv[])
{
	while ( scanf(" %s", num) == 1)
	{
		L = strlen( num);
		least[L] = 0;
		int i;
		for ( i = L; i; i--)
		{
			int cur = num[i-1] - '0';
			least[i-1] = cur < 4 ? 0 : ( cur == 4 && least[i] != -1) ? least[i] ? 1 : 0 : cur < 7 ? 1 : ( cur == 7 && least[i] != -1) ? least[i] + 1 : -1;
			/*
			printf("least[%d]:%d cur %d\n", i-1, least[i-1], cur);
			*/
		}

		/*
		for ( i = L; i && pos == -1; i--);
		{
			int cur = count[i-1];
			if ( abs( cur) > L - i)
			{
			}
			else
			{
				if ( !( ( L - i + cur) & 1))
				{
					if (  ( ( ( L - i) + cur) >> 1) >= least[i])
					{
						pos = i;
					}
				}
			}
		}

		*/
		printf("%s\n", num);
		if ( ( L & 1) || least[0] == -1 || least[0] > ( L >> 1))
		{
			L += L & 1 ? 1 : 2;
			for ( i = 0; i < ( L >> 1); i++)
			{
				num[i] = '4';
			}
			for ( i = ( L >> 1); i < L; i++)
			{
				num[i] = '7';
			}
			num[L] = '\0';
		}
		else
		{
			int need4 = L >> 1;
			int need7 = L >> 1;
			char bigger = 0;
			for ( i = 0; i < L; i++)
			{
				char tmp;
				if ( need4 && ( bigger || num[i] < '4' || ( num[i] == '4' && least[i+1] != -1 && least[i+1] <= need7)))
				{
					--need4;
					tmp = '4';
				}
				else
				{
					--need7;
					tmp = '7';
				}
				bigger |= tmp > num[i] ;
				num[i] = tmp;
			}
		}
		printf("%s\n", num);
	}

	return 0;
}
