#include<stdio.h>
int arr[1009];
int main(int argc, char *argv[])
{
	int a,b,n,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	  {
	  	scanf("%d %d",&a,&b);
	  	arr[a]=1;arr[b]=1;
	  }
	  for(i=1;i<=n;i++)
	  {
	  	if(arr[i]==0)
	  	{
	  	break;	
		}
	  }
	  for(j=1;j<=n;j++)
	  {
	  	if(i!=j)
	  	{
	  		printf("%d %d\n",i,j);	
		}
	  }
	  return 0;
}
