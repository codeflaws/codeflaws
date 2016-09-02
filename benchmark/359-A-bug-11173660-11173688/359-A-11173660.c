#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m,i,j,f1=0;;
	int a[100][100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1 && (i==0 || j==0))
			{
				f1=1;
			}
		}
	}
	if(f1==1)
		printf("2");
	else
		printf("4");
	return 0;
}
