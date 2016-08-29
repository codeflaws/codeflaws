#include<stdio.h>
typedef unsigned u;
u S[111],F[111],A[111],n;
u C(u x)
{
	u i,j,k,l;
	for(i=-1;++i<n;)A[i]=0;
	for(i=10001;i--;)
	{
		for(j=k=l=-1;++j<n;)
		if(S[j]<=i&&F[j]>=i&&A[j]<x&&k>i-S[j])
		{k=i-S[j];l=j;}
		if(l!=-1u)++A[l];
	}
	for(i=j=-1;++i<n;)if(A[i]<j)j=A[i];
	return j>=x;
}
int main(int argc, char *argv[])
{
	u i=-1,lo=0,hi=-1,mi;
	for(scanf("%u",&n);++i<n;--F[i])
	{
		scanf("%u%u",S+i,F+i);
		if(hi>F[i]-S[i])hi=F[i]-S[i];
	}
	for(++hi;(mi=(lo+hi)>>1)>lo;)
	{
		if(C(mi))lo=mi;
		else hi=mi;
	}
	printf("%u\n",lo*n);
	return 0;
}
