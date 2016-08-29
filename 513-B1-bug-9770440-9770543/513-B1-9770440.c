#include "stdio.h"
int res[55]={0};
int main(int argc, char *argv[])
{
	int n,m,i,pos=0,l,r;
	scanf("%d%d",&n,&m);
	l=0;
	r=n-1;
	for(i=1;i<=n;i++)
	{
		if(m<=(1<<(n-i-1)))
		{
			res[l++]=i;
		}
		else
		{
			m=(1<<(n-i))-m;
			res[r--]=i;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",res[i]);
		
return 0;
}
