#include<stdio.h>
#include<math.h>
int max(int a, int b)
{
	if(a>b)
	return a;
	else
	return b;

}
int main(int argc, char *argv[])
{
	int n,a[10004],i,min,max1;
	min=1000000;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		max1=max(a[i],a[i-1]);
		if(max1<min)
		min=max1;
	}
	if(min>a[0])
	min=a[0];
	if(min>a[n-1])
	min=a[n-1];
	printf("%d",min);
}
