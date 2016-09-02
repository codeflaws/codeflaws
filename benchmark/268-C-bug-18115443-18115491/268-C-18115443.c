#include<stdio.h>
int min(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int main(int argc, char *argv[])
{
	int x,y,m,i;
	scanf("%d %d", &x, &y);
	m = min(x,y);
	printf("%d\n", m+1);
	for(i=0; i<=m; i++)
	{
		printf("%d %d\n", i,i);
	}
}

