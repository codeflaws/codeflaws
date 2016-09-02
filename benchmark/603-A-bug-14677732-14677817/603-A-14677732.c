#include<stdio.h>
int main(int argc, char *argv[]){
	int n;
	char S[100010];
	while(scanf("%d",&n)!=EOF){
		int con[2]={0},count=1;
		scanf("%s",S);
		for(int i=1;i<n;i++){
			if(S[i-1]==S[i])con[S[i]-'0']++;
			else if(S[i-1]!=S[i])count++;
			if(i-3>=0&&S[i-3]==S[i-2]&&S[i-2]!=S[i-1]&&S[i-1]==S[i])con[0]=2;
		}
		if(con[1]>con[0])con[0]=con[1];
		if(con[0]>2)con[0]=2;
		printf("%d\n",count+con[0]);
	}
	return 0;
}

