#include<stdio.h>
int main(int argc, char *argv[])
{
	int j,n,k,a[1004],b[1004],i,c;
	scanf("%d %d",&n,&k);
	for(i=0;i<n*k;i++)
	{
		b[i]=i+1;
	}
	/*for(i=0;i<n*k;i++)
	{
		printf("%d ",b[i]);
	}*/
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]-1]=0;
	}
	/*for(i=0;i<n*k;i++)
	{
		printf("%d ",b[i]);
	}*/
	
	for(i=0;i<k;i++)
	{
		printf("%d ",a[i]);
		c=0;
		for(j=0;c<n-1;j++)
		{
			if(b[j]!=0)
			{
			printf("%d",b[j]);
			b[j]=0;
			c++;
			}
			
		}	
		printf("\n");
	}
	return 0;
}
