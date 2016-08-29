#include <stdio.h>

char type[100001];
int count[100001];
int from[100001];
int to[100001];

int main(int argc, char *argv[])
{
	int i;
	int n;
	int k;
	int p;
	int maxk;
	int besti;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &type[i]);
		count[i] = 0;
		to[i] = 0;
	}
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &from[i]);
		if(count[from[i]] == 0)
			to[from[i]] = i;
		else
			to[from[i]] = 0;
		count[from[i]]++;
	}
	maxk = -1;
	count[0] = 0;
	for(i = 1; i < n; i++)
	{
		if(from[i] == 0 || count[from[i]] != 1)
		{
			for(k = 0, p = i; to[p] != 0; k++, p = to[p]);
			if(type[p] == 1 && k > maxk)
			{
				maxk = k;
				besti = i;
			}
		}
	}
	printf("%d\n", maxk + 1);
	for(p = besti; to[p] != 0; p = to[p])
		printf("%d ", p);
	printf("%d\n", p);
	return 0;
}