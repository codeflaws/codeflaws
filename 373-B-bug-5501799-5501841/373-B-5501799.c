#include <stdio.h>
typedef long long int llint;
#define MAXD 33
int bit_cnt(llint n)
{
	int ret=0;
	if(n==0)return 1;
	while(n!=0)n/=10,++ret;
	return ret;
}
llint w,m,k,cost,cnt;
llint bound[33]={0,9};
llint now;
llint ans;

int main(int argc, char *argv[])
{
	int i,bc;
	for(i=2;i<MAXD;i++)bound[i]=bound[i-1]*10+9;
	while(scanf("%lld%lld%lld",&w,&m,&k)!=EOF)
	{
		w/=k;
		cost=0;
		ans=0;
		now=m;

		while(cost+bit_cnt(now)<=w)
		{
			bc=bit_cnt(now);
			cnt=bound[bc]-m+1;
			if(cost+bc*cnt<=w)
			{
				now=bound[bc]+1;
				ans+=cnt;
				cost+=bc*cnt;
			}
			else
			{
				cnt=(w-cost)/bc;
				now+=cnt;
				ans+=cnt;
				cost+=bc*cnt;
			}
		}
		printf("%lld\n",ans);
	}
}
