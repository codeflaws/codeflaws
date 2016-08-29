#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int n,k,a[31]={0},b[901]={0},i,j,c=0,s=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	/*	for(i=1;i<=(n*k);i++)
		{
		printf("%d ",b[i]);
		}
		printf("\n");*/
	i=1;
	for(j=1;j<=(n*k);j++)
	{
//		printf("j is %d\n",j);
		if(c<=(n-1))
		{
			if(b[j]==0)
			{
				printf("%d ",j);
				c+=1;
			}
			if(c==n-1)
			{
				printf("%d\n",a[i]);
				i++;
				c=0;
			}
		}
	}
	return 0;
}
