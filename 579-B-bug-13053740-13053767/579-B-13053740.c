#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int n;
	int **a;
	int i,j,max=0,x=0,y=0,k,l;
	int *ans;
	scanf("%d",&n);

	a = (int **)malloc((2*n) * sizeof(int *));
        for (i=0; i<2*n; i++)
             a[i] =(int *)malloc((2*n) * sizeof(int));

	ans = (int *)calloc((2*n) , sizeof(int));
	
	for(i=1;i<=(2*n-1);i++)
	{	
		for(j=0;j<i;j++)
		{			
			scanf("%d",&a[i][j]);
		}
	}
	for(k=0;k<=(2*n-1)/2;k++)
	{
		max = 0;
		for(i=1;i<=(2*n-1);i++)
		{	
			for(j=0;j<i;j++)
			{			
				if(a[i][j] > max)
				{
					max = a[i][j];
					x = i;
					y = j;
				}
			}
		}
		ans[x] = y;
		ans[y] = x;
		for(l=0;l<2*n;l++)
		{
			a[x][l] = a[y][l] = a[l][x] = a[l][y] = 0;
		}
		
	}
	for(i=0;i<2*n;i++)
		printf("%d",ans[i]+1);
	printf("\n");
	return 0;
}
