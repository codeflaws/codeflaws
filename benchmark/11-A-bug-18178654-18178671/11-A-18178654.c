#include<stdio.h>
int main(int argc, char *argv[])
{
	long long n,d,i;
	scanf("%lld%lld",&n,&d);
	long long arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	long long moves=0;
	for(i=1;i<n;i++)
	{
		if(arr[i]<=arr[i-1])
		{
			long long var=arr[i-1]-arr[i];
			var/=d;
			var+=1;
			moves+=var;
			arr[i]=arr[i]+(moves*d);
		}
	}
	printf("%lld\n",moves);
	return 0;
}
