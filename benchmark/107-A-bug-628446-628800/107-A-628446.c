#include <stdio.h>
#include <string.h>
#define MAXN 1000

int next[MAXN];
int outd[MAXN];
int outl[MAXN];
int ind[MAXN];
int N, P;

int main(int argc, char *argv[])
{
	while ( scanf("%d %d", &N, &P) == 2)
	{
		memset( next, 255, sizeof( next));
		memset( outd, 0, sizeof( outd));
		memset( ind, 0, sizeof( ind));
		int i;
		for ( i = 0; i < P; i++)
		{
			int s, t, l;
			scanf("%d %d %d", &s, &t, &l);
			--s, --t;
			++outd[s];
			++ind[t];
			next[s] = t;
			outl[s] = l;
		}
		/*
		printf("asdfasdfsadf\n");
		*/
		int cnt = 0;
		for ( i = 0; i < P; i++)
		{
			cnt += outd[i] == 1 && ind[i] == 0;
		}

		printf("%d\n", cnt);
		for ( i = 0; i < N; i++)
		{
			if ( outd[i] == 1 && ind[i] == 0)
			{
				int cur = next[i];
				int limit = outl[i];
				while ( outd[cur] && cur != i)
				{
					limit = limit < outl[cur] ? limit : outl[cur];
					cur = next[cur];
				}

				printf("%d %d %d\n", i + 1, cur + 1, limit);
			}
		}
	}
	return 0;
}
