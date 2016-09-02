#include<stdio.h>
#include<string.h>
//#define int long long
long long x,i,n,bas=-2000000000,son=2000000000;
char str[10],ans;
int main(int argc, char *argv[]){
	scanf("%lld",&n);
	for(i=1;i<=n;i++){
		scanf("%s %lld %c",str,&x,&ans);
		
		if(str[0]=='>' && !str[1]){
			if(ans=='Y' && bas < x+1)
				bas=x+1;
			else if(ans=='N' && son > x-1)
				son=x;
		}
		if(str[0]=='<' && !str[1]){
			if(ans=='Y' && son > x-1)
				son=x-1;
			else if(ans == 'N' && bas < x+1)
				bas=x;
		}
		if(str[0]=='>' && str[1]=='='){
			if(ans=='Y' && bas < x)
				bas=x;
			else if(ans =='N' && son > x)
				son=x-1;
		}
		if(str[0]=='<' && str[1]=='='){
			if(ans=='Y' && son > x)
				son=x;
			else if(ans == 'N' && bas < x)
				bas=x+1;
		}
	}
	
	if(bas<=son)
		printf("%lld",bas);
	else
		printf("Impossible");
	return 0;
}
