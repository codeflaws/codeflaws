//Author: Vipul Gaur
#include<stdio.h>
#include<string.h>

int gcd ( int a, int b )
{
  if ( a==0 ) return b;
  return gcd ( b%a, a );
}

int mod = 1000000007;
long long int dp[2002][2002];
int present[2002]={0}; int pos[2002]={0}; int input[2002]={0};

int main(int argc, char *argv[])
{
    int i,t,j,n,x,y,a,npos=0,perm=0;
	int ans=0;
	scanf("%d", &n);t=n; i=1;
	while(t--)
	{
		scanf("%d", &a);
		if(a != -1)
		{ pos[i]= 1; present[a]=1;}
        else npos++;
		i++;
	}
    for(i=1;i<=n;i++)
	{ if(pos[i]==present[i] && pos[i] == 0) perm++; }
	perm=npos-perm; 
	//printf("\n%d %d\n", npos, perm);
	
	dp[1][0]=0,dp[1][1]=1;
	dp[2][0]=1,dp[2][1]=1,dp[2][2]=2;
	dp[3][0]=2, dp[3][1]=3,dp[3][2]=4,dp[3][3]=6;
	if(npos == 1 || npos ==2 || npos==3) {ans=dp[npos][perm]; goto end;}
	else
	{
		for(i=4;i<=npos;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(j==0) {dp[i][j] = ((i-1)*dp[i-1][j+1])%mod;}
				else
				{  dp[i][j]=(dp[i][j-1]+dp[i-1][j-1])%mod;	}
			}
		}
		ans = dp[npos][perm];
	}
	
	end:
	printf("%d", ans);
	return 0;
}