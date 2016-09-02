#include<stdio.h>
typedef long long unsigned llu;
typedef unsigned u;
#define m 1000000007u
u D[2002][2050],V[2002],Z[2002],T[2002];
int main(int argc, char *argv[])
{
	u n,i,j,k,r=0;
	scanf("%u%u",&n,&k);
	for(T[i=0]=1;i<n;i++)
	{
		if((T[i+1]=T[i]<<1)>=m)T[i+1]-=m;
		scanf("%u",&j);
		V[i]=(j>>=1);
		if(j==0)Z[i]++;
	}
	for(i=n;i--;)if((Z[i]+=Z[i+1])>=m)Z[i]-=m;
	k=1u<<(k-1);
	if(!(V[0]&1))D[0][2]=1;
	if(!((V[0]>>1)&1))D[0][1]=1;
	for(i=0;++i<n;)
	{
		if(!(V[i]&1))for(j=1;j<k;j++)if(D[i-1][j])
		{
			if(j&1){if((D[i][2]+=D[i-1][j])>=m)D[i][2]-=m;}
			else if((D[i][j+2]+=D[i-1][j])>=m)D[i][j+2]-=m;
		}
		if(!((V[i]>>1)&1))for(j=1;j<k;j++)if(D[i-1][j])
		if((D[i][j+1]+=D[i-1][j])>=m)D[i][j+1]-=m;
		if(D[i][k])r+=D[i][j]*(llu)T[Z[i]]%m;
	}
	printf("%u\n",r);
	return 0;
}
