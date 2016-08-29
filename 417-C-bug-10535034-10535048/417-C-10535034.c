#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,k,j,i,d;
	scanf("%d %d",&n,&k);

	if( k<=((n-1)>>1) && k!=0)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=k;j++)
			{
				d=i+j;
					if(d>n)
						d=d-n;
				printf("%d %d\n",i,d);
			}
	}
	else
		printf("-1\n");
return 0;
}
