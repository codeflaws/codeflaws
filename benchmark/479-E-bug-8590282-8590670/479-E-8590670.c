#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int n,a,b,k;

long long int table[5001][5001];
long long int S[5001];
long long int ans;

int main(int argc, char *argv[]){

	int i,j;

	scanf("%d %d %d %d",&n,&a,&b,&k);

	table[a][0]=1;

	for(i=0;i<k;i++){
		S[1]=table[1][i];
		for(j=1;j<n;j++)
			S[j+1]=S[j]+table[j+1][i];
		if(b<a){
			for(j=b+1;j<n+1;j++)
				table[j][i+1]=(S[n]-S[j]+S[j-1]-S[(b+j)/2+((b+j)%2==0&&b+1>j+2?1:0)])%1000000007;
		}else{
			for(j=1;j<b;j++)
				table[j][i+1]=(S[j-1]+S[(b+j)/2+((b+j)%2==0?-1:0)]-S[j])%1000000007;
		}
	}

	for(j=1;j<n+1;j++){
		ans+=table[j][i];
		ans=ans%1000000007;
	}

	printf("%I64d\n",ans);

	return 0;

}
