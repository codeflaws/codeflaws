#include <stdio.h>

int N, M, G[100][100];
int P[100];

int find(int at)
{
	int i;
	
	for(i=1; i<=N; i++)
	{
		if(G[at][i] == 1 && P[i] == 0)
		{
			P[i] = P[at];
			find(i);
		}
	}
	
	return 0;
}

int main(int argc, char *argv[])
{
	int i, a, b;
	long long ans = 1;

	//FILE *input;
	//input = fopen("chemistry.in", "r");
	//fscanf(input, "%d %d\n", &N, &M);
	scanf("%d %d\n", &N, &M);
	
	for(i=0; i<M; i++)
	{
		//fscanf(input, "%d %d\n", &a, &b);
		scanf("%d %d\n", &a, &b);
		G[a][b] = 1;
		G[b][a] = 1;
	}
	
	for(i=1; i<=N; i++)
	{
		if(P[i] == 0)
		{
			P[i] = 1;
			find(i);
		}
		else
			ans *= 2;
	}
	
	printf("%I64d\n", ans);
	
	return 0;
}