#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m,i,j,b,g,flag=0;
	scanf("%d%d",&n,&m);
	int a[100]={0},c[100]={0};
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&j);
		a[j]=1;
	}
	scanf("%d",&g);
	for(i=0;i<g;i++)
	{
		scanf("%d",&j);
		c[j]=1;
	}
	for(i=0;i<n*m;i++)
	{
		if(a[i%n]==1 || c[i%m]==1)
		{
			a[i%n]=1;
			c[i%m]=1;
		}
		j=0;
		while(a[j]==1 && j<n)
			j++;
		if(j==n)
		{
			j=0;
			while(c[j]==1 && j<m)
				j++;
			if(j==m)
				flag=1;
		}
		if(flag==1)
			break;
	}
	if(flag==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}