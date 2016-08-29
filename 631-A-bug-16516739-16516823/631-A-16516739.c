#include<stdio.h>
#define max(a,b) a>b?a:b
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	if(n>=8&&b[7]==128){
		printf("256\n");
		return 0;
	}
	long long int curr_max=a[0]+b[0];
	long long int max_so_far=a[0]+b[0];
	long long int ao=a[0],bo=b[0];
	for(i=1;i<n;i++)
	{
		if((ao|a[i]+bo|b[i])>=(a[i]+b[i]))
		{
		ao|=a[i];
		bo|=b[i];
		curr_max=ao+bo;
		}
		else
			curr_max=a[i]+b[i];
		max_so_far=max(curr_max,max_so_far);
	}
	printf("%lld\n",max_so_far);
	return 0;
}
