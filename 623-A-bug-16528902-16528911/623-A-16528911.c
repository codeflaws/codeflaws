#include<stdio.h>
int main(int argc, char *argv[])
{
	char vertice[500];
	int edge[500][500];
	int m,n,i,j,x,y;
	int judge=1;
	
	
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	 vertice[i]='b';
	for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	  edge[i][j]=0;
	for(i=0;i<n;i++)
	 edge[i][i]=1;
	for(i=0;i<m;i++)
	 {
	 	scanf("%d%d",&x,&y);
	 	edge[x-1][y-1]=1;
	 	edge[y-1][x-1]=1;
	 }
	 for(i=0;i<n;i++)
	  for(j=i;j<n;j++)
	   {
	   	if(edge[i][j]==0&&vertice[i]=='b')
	   	{
	   		vertice[i]='a';
	   		vertice[j]='c';
	   	}
	   	else if(edge[i][j]==0&&vertice[i]=='a')
	   	{
	   		vertice[j]='c';
	   	}
	   	else if(edge[i][j]==0&&vertice[i]=='c')
	   	{
	   		vertice[j]='a';
	   	}
	   }
	for(i=0;i<n;i++)
	{
		if(vertice[i]=='a')
		{ 
			for(j=i;j<n;j++)
				  {
				  	if(vertice[j]=='a'&&edge[i][j]==0)
				  	 {
				  	 	printf("No\n");
				  	 	return 0;
				  	 }
				  }
			for(j=i;j<n;j++)
			{ 
					if(vertice[j]=='c'&&edge[i][j]==1)
					{
						printf("No\n");
						return 0;
					} 
			}
		}
    }
	if(judge==0)printf("No\n");
	
	else 
	{
	  	printf("Yes\n");
 		for(i=0;i<n;i++)
		{
		printf("%c",vertice[i]);
		}	
	}
	 
}
