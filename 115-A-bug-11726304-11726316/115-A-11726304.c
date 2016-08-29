#include<stdio.h>
int arr[2005]={0},a[2005];
int func(int n)
{
	if(n==-1)
		return 0;
	if(arr[n]==0)
		arr[n]=func(a[n]);
	return arr[n]+1;
}
int main(int argc, char *argv[])
{
	int n,i,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		arr[i]=func(a[i]);
	for(i=1;i<=n;i++)
		if(max<arr[i])
			max=arr[i];
	printf("%d\n",max+1);
}
