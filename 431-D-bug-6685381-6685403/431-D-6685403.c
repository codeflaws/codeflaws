#include <stdio.h>
#define lim 1000000000000000000

long long c[65][65]={0};
long long l,r,mid,ce,m;
int k,i,j;

long long check(long long x)
{
	long long ans,p;
	int i;
	
	ans=0; p=0;
	for (i=63; i>=0; i--)
	    if (((x>>i)&1==1) && (k-p>0)) {ans+=c[i][k-p]; p++;}
	if (p==k) ans++;
	return ans;
}

int main(int argc, char *argv[])
{
	scanf("%lld %d",&m,&k);
	for (i=0; i<=63; i++) c[i][0]=1;
	c[1][1]=1;
	for (i=2; i<=63; i++)
	    for (j=1; j<=63; j++) c[i][j]=c[i-1][j]+c[i-1][j-1];
	l=0; r=lim;
	while (l<r)
	{
		mid=(l+r)>>1;
		ce=check(mid<<1)-check(mid);
		if (ce>m) r=mid;
		if (ce<m) l=mid;
		if (ce==m) {printf("%lld\n",mid); return 0;}
	}
	return 0;
}
