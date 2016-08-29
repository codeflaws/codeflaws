#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n, m;
	scanf("%d %d",&n,&m);

   	int *Color;
	Color = (int *)malloc((m*3)*sizeof(int));

	int i, a, b, c;

	for(i=0;i<m*3;i++)
	{
		Color[i] = 0;
	}

	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		a -= 1;
		b -= 1;
		c -= 1;
		if(Color[a]!=0)
		{
			Color[b] =Color[a] + 2;
			Color[c] =Color[a] + 1;
			if(Color[b] > 3)
				Color[b] -= 3;
			if(Color[c] >3)
				Color[c] -= 3;
		}
		else if(Color[b] != 0)
		{
			Color[a] = Color[b] + 2;
			Color[c] = Color[b] + 1;
			if(Color[a] > 3)
			{
				Color[a] -= 3;
			}
			if(Color[b] > 3)
				Color[c] -= 3;
		}
		else if(Color[c] != 0)
		{
			Color[a] = Color[c] + 1;
			Color[b] = Color[c] + 2;
			if(Color[a] > 3)
				Color[a] -= 3;
			if(Color[b] > 3)
				Color[b] -= 3;
		}
		else
		{
			Color[a] = 1;
			Color[b] = 2;
			Color[c] = 3;
		}
	}

	for(i=0;i<n;i++)
	{
		if(i==0)
		printf("%d",Color[i]);
		else
		printf(" %d",Color[i]);
	}
	return 0;

}