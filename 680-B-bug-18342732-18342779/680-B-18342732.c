#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,a,b[101],i,c=0;
	scanf("%d%d",&n,&a);
	for(i=1;i<=n;i++)
	scanf("%d",&b[i]);
	if(b[a]==1)
	c=1;
	for(i=1;i<a&&i<=n-a;i++)
	{
		if(b[a-i]==b[a+i]==1)
			c+=2;
	}
	if(a<n+1-a)
	for(;i<=n-a;i++)
	{
		if(b[a+i]==1)
		c++;
	}
	else
	for(;i<a;i++)
	{
		if(b[a-i]==1)
		c++;
	}
	printf("%d",c);
	return 0;
}