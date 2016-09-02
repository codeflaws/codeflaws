#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,k,l=0,m,p,q,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	if(n%2==0)
	m=n/2;
	else
	m=(n+1)/2;
	for(j=0;j<n;j++)
	{
		p=arr[i];
		for(j=0;j<n;j++)
		{
			if(p==arr[j])
			count++;
		}
		if(count>l)
		l=count;
		
	}
	if(l<=m)
	printf("YES");
	else
	printf("NO");
return 0;
}