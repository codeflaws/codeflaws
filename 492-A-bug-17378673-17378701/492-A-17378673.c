#include<stdio.h>
int n,a[10009],i,j,d,k;
int main(int argc, char *argv[])
{
	scanf("%d",&n);
	a[0]=1;j=2;
	for(i=1;i<=10;i++)
	{
		a[i]+=a[i-1]+j++;
	}
	i=0;
	while(k<=n)
	{
		k=k+a[i++];
		d=d+1;
	}
	printf("%d",d-1);
	return 0;
}
