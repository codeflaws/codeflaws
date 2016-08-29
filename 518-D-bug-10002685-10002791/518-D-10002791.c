#include <stdio.h>
double dp[2002][2002];
int main(int argc, char *argv[]){
	int n,t,i,j;
	double p,result,temp;
	scanf("%d%lf%d",&n,&p,&t);
	dp[0][0] = 1;
	for(i=1;i<=t;i++){
		temp = 0;
		for(j=0;j<=n;j++){
			if(j == 0){
				 dp[i][j] = dp[i-1][j] * (1-p);
				 temp += dp[i][j];}
		    else if(j != n){
		    	 dp[i][j] = dp[i-1][j] * (1-p) + dp[i-1][j-1] * p;
				 temp += dp[i][j];}
		    else 
		    	 dp[i][j] = 1 - temp;
		}
	}
	result = 0;
	for(i=1;i<=n;i++){
		result += dp[t][i] * i;
	}
	printf("%f",result);
	return 0;
}
