#include <stdio.h>

int P[10000];
int A, N;

int find(int s, int f, int k)
{
	int i, m=1000000001, st;
	int t;

	if(f - s == 1)
	{
		return 1;
	}

	for(i=s; i<f; i++)
	{
		if(m > P[i])
			m = P[i];
	}

	for(i=s, st = -1, t = 0; i<f; i++)
	{
		if(P[i] > m && st == -1)
			st = i;
		if(P[i] <= m && st != -1)
		{
			t += find(st, i, m);
			st = -1;
		}
	}

	if(st != -1)
		t += find(st, f, m);

	printf("%d %d %d\n", s, f, t);
	
	if(m-k+t < f-s)
		return m-k+t;
	else
		return f-s;
}

int main(int argc, char *argv[])
{
	//FILE *input;
	//input = fopen("fence.in", "r");
	int i, j, t;
	char c;
	
	//fscanf(input, "%d\n", &N);
	scanf("%d\n", &N);
	
	for(i=0; i<N; i++)
	{
		//fscanf(input, "%d%c", &j, &c);
		scanf("%d%c", &j, &c);
		P[i] = j;
	}
	
	printf("%d\n", find(0, N, 0));
	
	return 0;
}