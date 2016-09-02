#include<stdio.h>
long long int min(long long int a,long long int b)
{
	if(a<b) return a;
	return b;
}
int main(int argc, char *argv[])
{
	long long int l=1,r=25000000001,mid,q,k,i,m,n;
	scanf("%lld%lld%lld",&m,&n,&k);
	while(l<r){
		mid=(l+r)/2;
		for(q=0,i=1;i<=n;i++)
			q+=min(mid/i,m);
		if(q<k)	l=mid+1;
		else r=mid;
	}
	printf("%lld",l);
	return 0;
}
