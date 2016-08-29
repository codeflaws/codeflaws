#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,max=0,p,l;
	scanf("%d",&n);
	int arr[1000]={0},arr1[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	p=n;
	for(i=0;i<n;i++)
	{
		arr[arr1[i]]=arr[arr1[i]]+1;
		if(max<arr[arr1[i]])
		max=arr[arr1[i]];
		if(arr[arr1[i]]>1)
		p--;
	}
	printf("%d %d",max,p);
return 0;
}