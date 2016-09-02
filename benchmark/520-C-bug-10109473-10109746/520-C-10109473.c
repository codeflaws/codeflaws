#include<stdio.h>
#define m 1000000007
typedef long long unsigned u64;
typedef unsigned u;
u O[33];
int main(int argc, char *argv[])
{
	u i=-1,j,k,n,r;char c;
	for(scanf("%u",&n);++i<n;O[c^64]=1)
	while((c=getchar())<'A');
	for(j=k=0,i=-1;++i<33;)
	{
		if(O[i]>k)k=O[i],j=0;
		if(O[i]==k)++j;
	}
	for(r=1;;j=j*(u64)j%m)
	{
		if(n&1)r=r*(u64)j%m;
		if(!(n>>=1))break;
	}
	printf("%u\n",r);
	return 0;
}
