#include <stdio.h>
#define MOD 199611267
int n,m,cnt;
int a[100010];
int main(int argc, char *argv[])
{
	int i,x;
	long long sum = 0,now = 1;
	scanf("%d%d",&n,&m);
	for(i=0;i<=n;i++)
	{
		if(scanf("%d",&x)>0) a[i] = x;
		else
		{
			scanf("?"); cnt++;
			a[i] = 23333;
		}
	}
	if(m)
	{
		if(!cnt)
		{
			for(i=0;i<=n;i++)
			{
				sum = (sum+a[i]*now%MOD+MOD)%MOD;
				now = (now*m%MOD+MOD)%MOD;
			}
			if(sum) printf("No");
			else printf("Yes");
		}
		else if(n&1) printf("Yes");
		else printf("No");
	}
	else
	{
		if(!a[0]) printf("Yes");
		else if(a[0]!=23333) printf("No");
		else
		{
			if((n+1-cnt)&1) printf("Yes");
			else printf("No");
		}
	}
	return 0;
}