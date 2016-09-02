#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,m,count=0,p,l=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	if(n%2==0)
	m=n/2;
	else
	m=(n+1)/2;
	for(i=0;i<n;i++)
	{
		count=0;
		p=a[i];
		for(j=0;j<n;j++)
		{
			if(p==a[i])
			count++;
		}
		if(l<count)
		l=count;
	}
	if(m>=l)
	printf("YES");
	else
	printf("NO");
return 0;
}