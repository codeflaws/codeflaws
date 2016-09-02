#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	
	int x,y,z,w,u,i,sum=0,maxsum=0,k;
	int **a=(int **)malloc(sizeof(int *)*5);
	for(i=0;i<5;i++)
	a[i]=(int*)malloc(sizeof(int)*5);
	
	for(i=0;i<5;i++)
		for(k=0;k<5;k++)
			scanf("%d",&a[i][k]);
	
	for(x=0;x<5;x++)
		for(y=0;y<5;y++)
		{
			if(y==x)
			continue;
			for(z=0;z<5;z++)
			{
				if(z==x || z==y)
				continue;
				for(w=0;w<5;w++)
				{
					if(w==x || w==y || w==z)
					continue;
					for(u=0;u<5;u++)
					{
						if(u==x || u==y || u==z || u==w)
						continue;
						sum=a[x][y]+a[y][x]+2*(a[z][w]+a[w][z]+a[w][u]+a[u][w])+a[y][z]+a[z][y];
						if(sum>maxsum)
						maxsum=sum;
					}
				}
			}
		}
		
	printf("%d\n",maxsum);
	return 0;
}
