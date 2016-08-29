#include <stdio.h>
#include <string.h>
int n,q,v[100010],c[100010];
long long qa,qb;
long long f[100010][2],vmx[100010];
long long max(long long a,long long b)
{
	return a>b?a:b;
}
long long work()
{
	int i,id;
	long long mx1,mx2;
	memset(vmx,-60,sizeof(vmx)); mx1 = mx2 = vmx[0];
	f[1][0] = 0; f[1][1] = v[1]*qb;
	mx1 = vmx[c[1]] = f[1][1]; id = c[1];
	for(i=2;i<=n;i++)
	{
		f[i][0] = max(f[i-1][0],f[i-1][1]);
		f[i][1] = v[i]*qb;
		if(c[i] == id)
		{
			f[i][1] = max(f[i][1],max(vmx[c[i]]+v[i]*qa,mx2+v[i]*qb));
			if(f[i][1]>mx1) mx1 = f[i][1];
		}
		else
		{
			f[i][1] = max(f[i][1],max(vmx[c[i]]+v[i]*qa,mx1+v[i]*qb));
			if(f[i][1]>=mx1) { mx2 = mx1; mx1 = f[i][1]; id = c[i];}
			else if(f[i][1]>mx2) mx2 = f[i][1];
		}
		vmx[c[i]] = max(vmx[c[i]],f[i][1]);
	}
	return max(f[n][0],f[n][1]);
}
int main(int argc, char *argv[])
{
	int i;
	scanf("%d%d",&n,&q);
	for(i=1;i<=n;i++) scanf("%d",&v[i]);
	for(i=1;i<=n;i++) scanf("%d",&c[i]);
	while(q--)
	{
		scanf("%lld%lld",&qa,&qb);
		printf("%lld",work());
	}
	return 0;
}
