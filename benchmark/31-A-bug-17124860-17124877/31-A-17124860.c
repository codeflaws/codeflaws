#include <stdio.h>
int n,arr[1000];
int main(int argc, char *argv[])
{
	int k,i,j;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",arr[i]);
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			for(k=0; k<n; k++)
				if (arr[i]==arr[j]+arr[k]&&j!=k)
				{
					printf("%d %d %d",i+1,j+1,k+1);
					return 0;
				}
	printf("%d",-1);
}