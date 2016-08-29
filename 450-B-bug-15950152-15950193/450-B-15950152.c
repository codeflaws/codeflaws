#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int x,y,i,n,t,p;
	long long int f[100];
	long long int m=1000000007;
	scanf("%lld%lld%lld",&x,&y,&n);
	f[1]=x;
	f[2]=y;
	f[3]=y-x;
	f[4]=-x;
	f[5]=-y;
	f[6]=x-y;
	p=n%6;
	t=f[p]%m;
	if(t<0)
	{
		t=t+m;
	}
	printf("%lld",t);
	return 0;
}