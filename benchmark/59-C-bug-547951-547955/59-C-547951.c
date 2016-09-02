#include <stdio.h>
#include <string.h>

char s[101];
int k, n, i, j, x, ok[30];

void read(){
	scanf("%d%s", &k, s);
}

int process(){
	n = strlen(s);
	x=n/2;
	for(i=0, j=n-1;i<x;i++, j--){
		if(s[i]=='?' && s[j]!='?')s[i]=s[j];
		else if(s[j]=='?' && s[i]!='?')s[j]=s[i];
		else if(s[j] != s[i])return 0;
		
		ok[s[i]-'a']=1;
		ok[s[j]-'a']=1;
	}
	x+=n%2;--x;
	for(i=k-1;x>=0&&i>=0;x--){
		
		if(s[x]=='?'){
			while(i>0&&ok[i])--i;
			s[x]=s[n-x-1]='a'+i;
			ok[s[x]-'a']=1;
		}
	}
	for(i=0;i<k;i++)if(!ok[i])return 0;
	return 1;
}

int main(int argc, char *argv[]){
	//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	read();
	if(process())printf("%s", s);
	else printf("IMPOSSIBLE");
	
	return 0;
}
