#include <stdio.h>
#define MAXN 5003
int k,bound;
int primes[]={2,3,5,7,11,13,17,19,23,29,31,37};
int ans[MAXN];
int cnt;

int main(int argc, char *argv[])
{
	int now,nxt;
	int i,j;

	while(scanf("%d",&k)!=EOF)
	{
		bound=2*k*k;
		cnt=0;
		for(i=0;cnt<k;i++)
		{
			ans[cnt++]=primes[i];
			for(j=0;j<cnt;j++)
				if(ans[j]*primes[i]<=bound)
					ans[cnt++]=ans[j]*primes[i];
		}
		for(i=0;i<k;i++)
		{
			if(i!=0)putchar(' ');
			printf("%d",ans[cnt-i-1]);
		}
		putchar('\n');
	}
	return 0;
}
