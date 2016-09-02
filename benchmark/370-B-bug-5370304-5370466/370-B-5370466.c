#include<stdio.h>

int main(int argc, char *argv[])
{
	int n,i,j,k,l,m;
	scanf("%d",&n);
	int a[n][101];
	int flag[n],count[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		for(j=1;j<=a[i][0];j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int fl1=0;
	for(m=0;m<n;m++)
	{
		flag[m]=0;
		count[m]=0;
	}
	for(i=0;i<n;i++)
	{
		fl1=0;
		for(j=1;j<=a[i][0];j++)
		{
			for(k=0;k<n;k++)
			{
				if(k!=i)
				{
					for(l=1;l<=a[k][0];l++)
					{
						if(a[i][j]==a[k][l])
						{
							flag[k]=1;
							count[k]++;
						}
					}
				}
			}
		}
		for(m=0;m<n;m++)
		{
			if(m!=i)
			{
				if(count[m]==a[m][0] && a[i][0]>=a[m][0])
				{
					fl1=1;
					printf("NO\n");
				}
			}
			if(fl1==1)
			{
				break;
			}
		}
		if(fl1==0)
		{
			printf("YES\n");
		}
		for(m=0;m<n;m++)
		{
			flag[m]=0;
			count[m]=0;
		}
	}
	return 0;
}
