#include <stdio.h>
#define maxn 55
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	char s[55];
	scanf("%s",s);
	int i;
	long long ans=0,t=1;
	for(i=0;i<n;i++)
	{
		if(s[i]=='B')
		{
			ans+=t<<i;
		}
	}
		printf("%lld\n",ans);
	return 0;
}
