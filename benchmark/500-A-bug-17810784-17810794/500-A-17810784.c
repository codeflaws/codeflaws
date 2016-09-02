#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 100000

typedef struct NODE
{
	int v;
	struct NODE* next;
}
Node;

void add_edge(Node **g, int v1, int v2);
int dfs(Node **g, int v, int target, int *visited);

int main(int argc, char *argv[])
{
	int n, dest, i, offset;
	char buf[BUFSIZE];
	fgets(buf, BUFSIZE, stdin);
	sscanf(buf, "%d %d", &n, &dest);
	int *visited = (int *)calloc(n + 1, sizeof(int));
	Node **g = (Node **)malloc((n + 1) * sizeof(Node *));
	for (i = 0; i < n + 1; i++)
	{
		g[i] = (Node *)malloc(sizeof(Node));
		g[i]->v = i;
		g[i]->next = NULL;
	}
	i = 0;
	while (fscanf(stdin, "%d", &offset) > 0)
	{
		add_edge(g, i, i + offset);
		i++;
		scanf(" ");
	}
	if (dfs(g, 1, dest, visited))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}

void add_edge(Node **g, int v1, int v2)
{
	Node* v = g[v1];
	Node *v22 = (Node *)malloc(sizeof(Node));
	v22->v = v2;
	v22->next = v->next;
	v->next = v22;
}

int dfs(Node **g, int v, int target, int *visited)
{
	visited[v] = 1;
	Node *aux = g[v]->next;
	while (aux != NULL)
	{
		int v1 = aux->v;
		if (v1 == target)
		{
			return 1;
		}
		if (visited[v1])
		{
			aux = aux->next;
			continue;
		}
		if (dfs(g, v1, target, visited))
		{
			return 1;
		}
		aux = aux->next;
	}
	return 0;
}


