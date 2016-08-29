#include <stdio.h>
#include<stdlib.h>
#define Mod 1000000007
int main(int argc, char *argv[]) 
{
	int n,k,res,i,j,m,**dp;
	scanf("%d%d",&n,&k);
	dp=(int**)malloc((2002)*sizeof(int*));
	for(i=0;i<2002;i++)
		dp[i]=(int*)malloc((2002)*sizeof(int));
	for(i=0;i<2002;i++)
		for(j=0;j<2002;j++)
			dp[i][j]=0;
	for(i=1;i<=n;i++)
		dp[1][i]=1;
	for(i=1;i<=k;++i)
		for(j=1;j<=n;++j)
			for(m=j;m<=n;m+=j)
				dp[i][m]=(dp[i][m]+dp[i-1][j])%Mod;
	res=0;
	for(i=1;i<=n;++i)
		res=(res+dp[k][i])%Mod;
	printf("%d\n",res);
return 0;
}
