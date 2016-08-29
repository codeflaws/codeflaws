#include <stdio.h>

typedef struct scan
{
	int from;
	int to;
}scan;

int graph[550][550];
int color[550];
char out[550];
scan input[250005];

int cmp(const void *a, const void *b)
{
	scan a1 = * (scan *)a;
	scan b1 = * (scan *)b;
	if(a1.from > b1.from)
	    return 1;
	else if(a1.from < b1.from)
	    return -1;
	else
	    return a1.to - b1.to;
}

int ulta(int a)
{
	if(a==1)
		return 2;
	return 1;
}

int colorable(int n)
{
	int i, j;
	for(i=1;i<=n;i++)
	{
		int k=0;
		for(j=1;j<=n;j++)
			if(graph[i][j] == 0)
				k++;

		if(color[i]==0)
		{
			if(k==n)
				color[i] = 3;
			else
				color[i] = 1;
		}

		int green = ulta(color[i]);

		for(j=1;j<=n;j++)
		{
			if(graph[i][j] > 0)
			{
				if(color[j] == 0)
					color[j] = green;
				else if(color[j] == color[i])
					return 1;
			}
		}
	}
	return(0);
}

int print(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(color[i]==1)
			out[i-1] = 'a';
		if(color[i]==2)
			out[i-1] = 'c';
		if(color[i]==3)
			out[i-1] = 'b';
	}
	out[n] = '\0';
/*	printf("%s\n", out);
*/	return(0);
}

int main(int argc, char *argv[])
{
	int n,m,i,j;
	scanf("%d", &n);
	scanf("%d", &m);

	for(i=0;i<m;i++)
	{
		scanf("%d %d", &input[i].from, &input[i].to);
		if(input[i].from > input[i].to)
		{
			int temp = input[i].from;
			input[i].from = input[i].to;
			input[i].to = temp;
		}
	}
	
	qsort(input, m, sizeof(scan), cmp);

	for(i=0;i<550;i++)
		for(j=0;j<550;j++)
			graph[i][j]=0;

	//if(m==6413)
	{
		/*printf("\n\n");
		for(i=0;i<m;i++)
			printf("%d %d\n", input[i].from, input[i].to);
		printf("\n\n\n")*/;
		/*for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				printf("%d ", graph[i][j]);
			printf("\n");
		}
		printf("\n\n\n");*/
	}

	int count=0;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{	
			while(i > input[count].from && count < m)
				count++;
			while(j > input[count].to && i == input[count].from && count < m)
				count++;

			if(count < m)
			{
				int from = input[count].from;
				int to = input[count].to;

				//printf("comparing %d, %d with input %d, %d\n", i, j, from, to);

				if(from!=i || to!=j)
				{
					if(graph[i][j]==0 && graph[j][i]==0)
						graph[i][j]++;
				}
			}
			else
			{
				if(graph[i][j]==0 && graph[j][i]==0)
					graph[i][j]++;
			}
		}
	}

	/*for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				printf("%d ", graph[i][j]);
			printf("\n");
		}
		printf("\n\n\n");*/

	int a = colorable(n);

	

	if(a==0)
	{
		print(n);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((out[i] == 'a' && out[j] == 'c') || (out[i] == 'c' && out[j] == 'a'))
				{
					if(graph[i][j] == 0 && graph[j][i] == 0)
					{
						a=1;
						break;
					}
				}
			}
			if(a==1)
			{
				printf("No\n");
				break;
			}
		}
		if(a==0)
		{
			printf("Yes\n");
			printf("%s\n", out);
		}
		
	}
	else
		printf("No\n");
	
	return(0);
}