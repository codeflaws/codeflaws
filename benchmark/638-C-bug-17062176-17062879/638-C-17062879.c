#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct verge_type{
	int u;
	int v;
}verge;

typedef struct vertex_type{
	int population;
	int *neighbours;
	int *links;
}vertex;

void build_graph(vertex *node, int n, verge *input)
{
	int i, u, v, *filled;

	filled = malloc(n * sizeof(int));
	for(i = 0; i < n; i++)
		filled[i] = 0;
	for(i = 0; i < n - 1; i++){
		u = input[i].u;
		v = input[i].v;
		node[u].neighbours[filled[u]] = v;
		node[u].links[filled[u]] = i;
		filled[u]++;
		node[v].neighbours[filled[v]] = u;
		node[v].links[filled[v]] = i;
		filled[v]++;
	}

	free(filled);
}

void count_verges_per_day(vertex *graph, int n, int *output)
{
	int i, j, k, day, *cur_level[2], level_size[2], *parent[2], *parent_day[2], skip_parent;

	for(i = 0; i < 2; i++){
		cur_level[i] = malloc((n - 1) * sizeof(int));
		parent[i] = malloc((n - 1) * sizeof(int));
		parent_day[i] = malloc((n - 1) * sizeof(int));
	}
	memcpy(cur_level[0], graph->neighbours, graph->population * sizeof(int));
	level_size[0] = graph->population;
	for(i = 0; i < graph->population; i++){
		parent[0][i] = 0;
		parent_day[0][i] = i;
		output[i]++;
	}
	for(i = 0; level_size[i]; i ^= 1){
		level_size[i ^ 1] = 0;
		for(j = 0; j < level_size[i]; j++){
			day = 0;
			skip_parent = 0;
			for(k = 0; k < graph[cur_level[i][j]].population - 1; k++){
				if(graph[cur_level[i][j]].neighbours[k] == parent[i][j])
					skip_parent = 1;
				if(day == parent_day[i][j])
					day++;
				cur_level[i ^ 1][level_size[i ^ 1] + k] = graph[cur_level[i][j]].neighbours[k + skip_parent];
				parent[i ^ 1][level_size[i ^ 1] + k] = cur_level[i][j];
				parent_day[i ^ 1][level_size[i ^ 1] + k] = day;
				output[day]++;
				day++;
			}
			level_size[i ^ 1] += graph[cur_level[i][j]].population - 1;
		}
	}

	for(i = 0; i < 2; i++){
		free(cur_level[i]);
		free(parent[i]);
		free(parent_day[i]);
	}
}

void assign_verges_to_days(vertex *graph, int n, int **output, int days)
{
	int i, j, k, day, *filled, *cur_level[2], level_size[2], *parent[2], *parent_day[2], skip_parent;

	for(i = 0; i < 2; i++){
		cur_level[i] = malloc((n - 1) * sizeof(int));
		parent[i] = malloc((n - 1) * sizeof(int));
		parent_day[i] = malloc((n - 1) * sizeof(int));
	}
	filled = malloc(days * sizeof(int));
	for(i = 0; i < days; i++)
		filled[i] = 0;
	memcpy(cur_level[0], graph->neighbours, graph->population * sizeof(int));
	level_size[0] = graph->population;
	for(i = 0; i < graph->population; i++){
		parent[0][i] = 0;
		parent_day[0][i] = i;
		output[i][filled[i]++] = graph[0].links[i] + 1;
	}
	for(i = 0; level_size[i]; i ^= 1){
		level_size[i ^ 1] = 0;
		for(j = 0; j < level_size[i]; j++){
			day = 0;
			skip_parent = 0;
			for(k = 0; k < graph[cur_level[i][j]].population - 1; k++){
				if(graph[cur_level[i][j]].neighbours[k] == parent[i][j])
					skip_parent = 1;
				if(day == parent_day[i][j])
					day++;
				cur_level[i ^ 1][level_size[i ^ 1] + k] = graph[cur_level[i][j]].neighbours[k + skip_parent];
				parent[i ^ 1][level_size[i ^ 1] + k] = cur_level[i][j];
				parent_day[i ^ 1][level_size[i ^ 1] + k] = day;
				output[day][filled[day]++] = graph[cur_level[i][j]].links[k + skip_parent] + 1;
				day++;
			}
			level_size[i ^ 1] += graph[cur_level[i][j]].population - 1;
		}
	}

	free(filled);
	for(i = 0; i < 2; i++){
		free(cur_level[i]);
		free(parent[i]);
		free(parent_day[i]);
	}
}

int main(int argc, char *argv[])
{
	int n, i, j, u, v, days = 0, *day_business, **result;
	verge *road;
	vertex *city;

	scanf("%d", &n);
	road = malloc((n - 1) * sizeof(verge));
	city = malloc(n * sizeof(vertex));
	for(i = 0; i < n; i++)
		city[i].population = 0;
	for(i = 0; i < n - 1; i++)
	{
		scanf("%d %d", &u, &v);
		road[i].u = u - 1;
		road[i].v = v - 1;
		city[u - 1].population++;
		city[v - 1].population++;
		if(city[u - 1].population > days || city[v - 1].population > days)
			days++;
	}
	for(i = 0; i < n; i++){
		city[i].neighbours = malloc(city[i].population * sizeof(int));
		city[i].links = malloc(city[i].population * sizeof(int));
	}
	build_graph(city, n, road);
	day_business = malloc(days * sizeof(int));
	for(i = 0; i < days; i++)
		day_business[i] = 0;
	count_verges_per_day(city, n, day_business);
	result = malloc(days * sizeof(int*));
	for(i = 0; i < days; i++)
		result[i] = malloc(day_business[i] * sizeof(int));
	assign_verges_to_days(city, n, result, days);
	printf("%d\n", days);
	for(i = 0; i < days; i++){
		printf("%d", day_business[i]);
		for(j = 0; j < day_business[i]; j++)
			printf(" %d", result[i][j]);
		printf("\n");
	}

	for(i = 0; i < days; i++)
		free(result[i]);
	free(result);
	free(day_business);
	for(i = 0; i < n; i++){
		free(city[i].neighbours);
		free(city[i].links);
	}
	free(city);
	free(road);

	return 0;
}
