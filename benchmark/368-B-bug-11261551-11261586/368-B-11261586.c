#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int n,m,a[200004],i;
	scanf("%d %d",&n,&m);
	int x,ans[100005]={0},hash[200004]={0};
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ans[n-1]=1;
	hash[a[n-1]]=1;
	for(i=n-2;i>=0;i--)
	{	
		if(hash[a[i]]==0)
		{
			ans[i]=ans[i+1]+1;
			hash[a[i]]=1;
		}
		else
			ans[i]=ans[i+1];
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&x);
		printf("%d\n",ans[x-1]);
	}
	return 0;
}

