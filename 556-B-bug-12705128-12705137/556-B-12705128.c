#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n,i,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++) scanf("%d",&arr[i]);
	int k=n-arr[1];
	for(i=1;i<=n;i++)
	{
		if(i%2==1) arr[i]=(arr[i]+k)%n;
		else arr[i]=(arr[i]-k + n)%n;
		if(arr[i]!=(i-1)) 
		{
			count=1;
			break;
		}
	}
	if(count==1) printf("No\n");
	else printf("Yes\n");
	return 1;
}
