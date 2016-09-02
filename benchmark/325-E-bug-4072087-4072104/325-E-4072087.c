#include<stdio.h>
int n;
int visited[10001];
void dfs(int x)
{
	visited[x]=1;
	if (x==1)
	{
		printf("0 1");
	}
	else
	{
		if (visited[(n+x)/2])
		{
			dfs(x/2);
		}
		else
		{
			dfs((n+x)/2);
		}
		printf(" %d",x);
	}
}

int main(int argc, char *argv[])
{
	scanf ("%d", &n);
	if (n%2)
	{
		printf("-1\n");
		return 0;
	}
	dfs(0);
	printf("\n");
	return 0;
}
