#include<stdio.h>
#define INF -6e12

/*
C. George and Job
http://codeforces.com/problemset/problem/467/C
*/

typedef long long int LL;

int n,m;

LL sum[5005];
LL arr[5005];
LL memo[5005][5005];
char calculated[5005][5005];

LL MAX(LL a,LL b)
{
	return a > b ? a : b;
}

LL dp(int index,int k)
{
	// Meaning that we have crossed the array boundary but we still have some 
	// m sized ranges to consider.
	if(index >= n-m && k > 0)
	return INF;
	
	// All the k ranges have been considered for the sum. No need to recurse further.
	if(k == 0)
	return 0;
	
	// If the result for this subproblem has already been calculated, then return the result
	if(calculated[index][k] == 1)
	return memo[index][k];
	
	LL ans1,ans2;
	
	// Do not consider the current range. Move on to the next one
	ans1=dp(index+1,k);
	
	// Consider the current range and recurse on the next non overlapping range.
	ans2=dp(index+m,k-1) + sum[index];
	
	calculated[index][k]=1;
	memo[index][k]=MAX(ans1,ans2);
	return MAX(ans1,ans2);
}

int main(int argc, char *argv[])
{
	int i,k;
	
	scanf("%d%d%d",&n,&m,&k);
	
	for(i=0;i<n;i++)
	scanf("%ld",&arr[i]);
	
	for(i=0;i<m;i++)
	sum[0]+=arr[i];
	
	for(i=1;i<=(n-m);i++)
	{
		sum[i]=sum[i-1];
		
		sum[i]-= arr[i-1];
		sum[i]+= arr[m+i-1];
	}
	
	printf("%lld\n",dp(0,k));
	
	return 0;
}
