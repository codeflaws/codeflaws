#include<stdio.h>
#include<string.h>
long long int n,nn,i,j,ii,a[100002],h[100002],t,x,min;
long long int top;
int main(int argc, char *argv[])
{
	scanf("%lld %lld",&n,&x);
	nn=n;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",a+i);
		if(i==1 || a[i]<min)
			min=a[i];
	}
	t=n*min;
	for(i=1;i<=n;i++)
		a[i]-=min;
	while(a[x])
	{
		if(!x) x=n;
		if(!a[x]) break;
		a[x--]--;
		t++;
	}
	a[x]=t;
	for(i=1;i<=n;i++)
		printf("%lld ",a[i]);
	return 0;
}
