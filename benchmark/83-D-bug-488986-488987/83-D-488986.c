#include <stdio.h>
#define gmax(a,b) ((a)>(b)?(a):(b))
long tot1,tot2,total=0,z[5000005]={0},hash[20000005]={0},last[20000005]={0},ans1,ans2;
long work1(long count,long k)
{
	long o=count/k,tot=0,sum=0,i,j;
	for(i=2;i<=o;i++)
	{
		if(hash[i]==0)
		{
			z[++tot]=i;
			last[i]=i;
		}
		for(j=1;j<=tot && z[j]*i<=o;j++)
		{
			hash[z[j]*i]=1;
			last[z[j]*i]=z[j];
			if(i%z[j]==0)
				break;
		}
	}
	for(i=2;i<=o;i++)
		if(last[i]>=k)
			sum++;
	if(count>=k)
		sum++;
	return sum;
}
void dfs(long k,long p,long long u)
{
	if(u>gmax(tot1,tot2))
		return ;
	if(k<=total)
	{
		dfs(k+1,p,u);
		dfs(k+1,p+1,u*z[k]);
	}
	else if(p)
	{
		if(p%2)
		{
			ans1-=tot1/u;
			ans2-=tot2/u;
		}
		else
		{
			ans1+=tot1/u;
			ans2+=tot2/u;
		}
	}
}
long check(long k)
{
	long i;
	for(i=2;i<=sqrt(k);i++)
		if(k%i==0)
			return 0;
	return 1;
}
int main(int argc, char *argv[])
{
	long k,i,A,B,j;
//	freopen("d.in","r",stdin);
//	freopen("d.out","w",stdout);
	scanf("%ld %ld %ld\n",&A,&B,&k);
	if(check(k)==0)
		printf("0\n");
	if(k>=100)
		printf("%ld\n",work1(B,k)-work1(A-1,k));
	else
	{
		for(i=2;i<k;i++)
		{
			if(hash[i]==0)
			{
				z[++total]=i;
				last[i]=i;
			}
			for(j=1;j<=total && z[j]*i<k;j++)
			{
				hash[z[j]*i]=1;
				if(i%z[j]==0)
					break;
			}
		}
		tot1=B/k; tot2=(A-1)/k;
		ans1=B/k; ans2=(A-1)/k;
		dfs(1,0,1);
		printf("%ld\n",ans1-ans2);
	}

	return 0;
}
