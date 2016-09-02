#include <stdio.h>

int N, M[2000][2000];
int G[2000];
int Q, A;

int main(int argc, char *argv[])
{
	int i, j;
	int a, b;
	char c;
	//FILE *input;
	
	//input = fopen("uproduct.in", "r");
	
	//fscanf(input, "%d\n", &N);
	scanf("%d\n", &N);
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			//fscanf(input, "%d%c", &(M[i][j]), &c);
			scanf("%d%c", &(M[i][j]), &c);
			
			if(i == j)
			{
				G[i] = M[i][j];
				A += G[i];
			}
		}
	}
	
	//fscanf(input, "%d\n", &Q);
	scanf("%d\n", &Q);
	
	for(i=0; i<Q; i++)
	{
		//fscanf(input, "%d%c", &a, &c);
		scanf("%d%c", &a, &c);
		
		if(a == 1)
		{
			//fscanf(input, "%d\n", &b);
			scanf("%d\n", &b);
			
			A -= G[b-1];
			G[b-1] = 1-G[b-1];
			A += G[b-1]+4;
			A = A%2;
		}
		else if(a == 2)
		{
			//fscanf(input, "%d\n", &b);
			scanf("%d\n", &b);
			
			A -= G[b-1];
			G[b-1] = 1-G[b-1];
			A += G[b-1]+4;
			A = A%2;
		}
		else
		{
			printf("%d", A);
		}
	}
	
	printf("\n");
	
	return 0;
}