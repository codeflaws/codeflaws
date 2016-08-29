
/* Sravan Bagalkote 
   200901048
 */


#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i,n,k;
	int y[10000],ans[10000];
	for(i=0;i<10000;i++)
	{
		y[i]=0;
		ans[i]=0;

	}
	scanf("%d%d",&n,&k);
	for(i=0;i<(2*n+1);i++)
	{
		scanf("%d",&y[i]);
		ans[i]=y[i];
	}
	int cnt=0;
	for(i=1;i<=2*n;i+=2)
	{
		if(cnt==k)
			break;
		if(y[i]>y[i-1]&&y[i]>y[i+1])
		{
			ans[i]=y[i]-1;
			cnt++;
		}
	}
	for(i=0;i<(2*n+1);i++)
		printf("%d ",ans[i]);
	printf("\n");
	return 0;
}
