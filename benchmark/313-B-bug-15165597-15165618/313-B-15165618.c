#include<stdio.h>
#include<string.h>
char s[100001];
int dp[100001];
void memoize(int len)
{
	int i;

	for(i=1;i<len;i++)
	{
		if(s[i]==s[i-1])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=dp[i-1];
	}
		
}

int main(int argc, char *argv[])
{
	int t,l,r,i;
	long long int n;
	scanf("%s",s);
	memoize(strlen(s));
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&l,&r);
		n=dp[r-1]-dp[l-1];
		printf("%lld\n",n);
	}
	return 0;
}
