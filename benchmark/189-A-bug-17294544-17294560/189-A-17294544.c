#include <stdio.h>
#define MAX(i,j) i>j?i:j

int main(int argc, char *argv[])
{
	int i,n,a,b,c;
	scanf("%d %d %d %d",&n,&a,&b,&c);
	int arr[n+1];
	arr[0]=0;
	for(i=1;i<n+1;i++)
	{
		arr[i]=-2;
	}
	for(i=a;i<n+1;i++)
	{
		arr[i]=MAX(arr[i],arr[i-a]+1);
	}
	for(i=b;i<n+1;i++)
	{
		arr[i]=MAX(arr[i],arr[i-b]+1);
	}
	for(i=c;i<n+1;i++)
	{
		arr[i]=MAX(arr[i],arr[i-c]+1);
	}
	printf("%d\n",arr[n]);
	return 0;
}