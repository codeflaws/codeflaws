#include<stdio.h>


typedef struct
{
	int i, v;
} node;

node a[2][100001], aa[100001], bb[100001];
int i, c, n, v, na, nb, ii;

void input()
{
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d %d", &c, &v);
		
		if (c)
		{
			a[0][na].i = i;
			a[0][na].v = v;
			na++;
		}
		else
		{
			a[1][nb].i = i;
			a[1][nb].v = v;
			nb++;
		}	
	}
}

void mergesort(int ii, int p, int q, int r)
{
	int i, j, k, n1, n2;
	
	n1 = q-p+1;
	for (i=0; i<n1; i++)	aa[i] = a[ii][p+i];  aa[n1].v = 999999999;
	
	n2 = r-q;
	for (i=0; i<n2; i++)	bb[i] = a[ii][q+i+1];  bb[n2].v = 999999999;
	
	i=0; j=0;
	for (k=p; k<=r; k++)
	if  (aa[i].v < bb[j].v)
		a[ii][k] = aa[i++];
	else
		a[ii][k] = bb[j++];
}

void merge(int ii, int p, int r)
{
	if (p<r)
	{
		int q = (p+r)/2;
		merge(ii, p, q);
		merge(ii, q+1, r);
		mergesort(ii, p, q, r);
	}
}

void soLve()
{
	merge(0, 0, na-1);
	merge(1, 0, nb-1);
	
	int j = 0, i=0;
	while (i<na && j<nb)
	{
		int min = a[0][i].v;
		if (min > a[1][j].v) min = a[1][j].v;
		
		printf("%d %d %d\n", a[0][i].i+1, a[1][j].i+1, min);
		
		a[0][i].v -= min;
		a[1][j].v -= min;
		
		if (a[1][j].v <= 0)
			j++;
		else
			i++;
	}
	
	if (i<na && !(a[0][i].v == 0 && i == na-1))
	{
		j=0;
		while (i<na)
		{
			printf("%d %d %d\n", a[0][i].i+1, a[1][j].i+1, a[0][i].v);
			i++;
			if (j<nb-1) j++;
		}
	}
	else
	if (j<nb && !(a[1][j].v == 0 && j == nb-1))
	{
		i=0;
		while (j<nb)
		{
			printf("%d %d %d\n", a[0][i].i+1, a[1][j].i+1, a[1][j].v);
			j++;
			if (i<na-1) i++;
		}	
	}

}

int main(int argc, char *argv[])
{
	input();
	soLve();
	
	return 0;
}

