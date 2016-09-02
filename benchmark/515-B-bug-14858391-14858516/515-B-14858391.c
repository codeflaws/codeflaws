#include<stdio.h>
#include<string.h>

int GY(int a, int b)
{
	if(b == 0)
		return a;
	if(a % b == 0)
		return b;
	else
		return (b, a % b);
}
int main(int argc, char *argv[])
{
	int a, b, c[200], d[200], m, n, x, y, i, j, k, t;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		memset(c, 0, sizeof(c));
		memset(d, 0, sizeof(d));
		scanf("%d", &a);
		for(i = 0; i < a; i++)
		{
			scanf("%d", &k);
			c[k] = 1;
		}
		scanf("%d", &b);
		for(i = 0; i < b; i++)
		{
			scanf("%d", &k);
			d[k] = 1;
		}
		if(m > n)
		{
			k = GY(m, n);
			t = m - n;
		}
		else
		{
			k = GY(n, m);
			t = n - m;
		}
		if(k > t)
			k = GY(k, t);
		else
			k = GY(t, k);
		y = 1;
		for(i = 0; i < k; i++)
		{
			x = 0;
			for(j = 0; j + i < m || j + i < n; j += k)
			{
				if(j + i < m)
				{
					if(c[j + i] == 1)
					{
						x = 1;
						break;
					}
				}
				if(j + i < n)
				{
					if(d[j + i] == 1)
					{
						x = 1;
						break;
					}
				}
			}
			if(x == 0)
			{
				y = 0;
				break;
			}
		}
		if(y == 1)
			printf("Yes\n");
		else
			printf("No\n");
	} 
}