#include<stdio.h>
#include<stdlib.h>
typedef unsigned u;
int F(const void*x,const void*y){return*(int*)x-*(int*)y;}
u A[222222],B[222222],M[222222],Si,L,R;
int N[222222],S[222222];
int main(int argc, char *argv[])
{
	u n,q,i=-1,j,k=0;
	for(scanf("%u%u",&n,&q);++i<n;)scanf("%i",N+i);
	for(i=-1;++i<q;)
	{
		scanf("%u%u",A+i,B+i);
		if(k<B[i])k=B[i];
	}
	qsort(N,k,sizeof(int),F);
	for(i=0;q--;)
	{
		j=B[q];k=A[q];
		while(i<j)M[i++]=k;
	}
	L=0;R=n;
	while(n--)
	{
		if(M[n]==2)S[Si++]=N[L++];
		else S[Si++]=N[--R];
	}
	while(Si--)printf("%i%c",S[Si],Si?' ':'\n');
	return 0;
}
