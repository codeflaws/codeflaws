#include <stdio.h>
int n,m;
long long k;
long long min(long long a,long long b)
{
	return a<b?a:b;
}
long long cal(long long lim)
{
	int i;
	long long ret = 0;
	for(i=1;i<=n;i++) ret += min(lim/i,m);
	return ret;
}
long long work()
{
	int head = 1,tail = (long long)n*m,mid;
	while(head<tail)
	{
		mid = (head+tail)>>1;
		if(cal(mid)>=k) tail = mid;
		else head = mid+1;
	}
	return head;
}
int main(int argc, char *argv[])
{
	int i;
	scanf("%d%d%lld",&n,&m,&k);
	printf("%lld",work());
	return 0;
}
