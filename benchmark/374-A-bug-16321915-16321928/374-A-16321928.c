#include<stdio.h>
long long int n,m,i,j,a,b;
int ab(int a)
{
	if(a<0)
	return -a;
	return a;
}
int max(int a,int b)
{
	if(a<b)
	return b;
	return a;
}
int min(int a,int b)
{
	if(a>b)
	return b;
	return a;
}
int func(int u,int v)
{		
		if(i==u&&j==v)
		return 0;
		if(i+a>n&&i-a<=0)
		return -1;
		if(j+b>m&&j-b<=0)
		return -1;
		int x=ab(u-i),y=ab(v-j);
		if(x%a!=0||y%b!=0)
		return -1;
		x=x/a;y=y/b;
		if(x%2!=y%2)
		return -1;
		int t=max(x,y);
		return t;
}
int main(int argc, char *argv[])
{
	scanf("%lld%lld%lld%lld%lld%lld",&n,&m,&i,&j,&a,&b);
	int ans=100000000;
	int a=func(1,m);
	if(a!=-1)
	{
		ans=min(ans,a);
	}
	a=func(n,1);
	if(a!=-1)
	{
		ans=min(ans,a);
	}
	a=func(1,1);
	if(a!=-1)
	{
		ans=min(ans,a);
	}
	a=func(n,m);
	if(a!=-1)
	{
		ans=min(ans,a);
	}
	if(ans<100000000)
	printf("%d",ans);
	else
	printf("Poor Inna and pony!");
	return 0;
}