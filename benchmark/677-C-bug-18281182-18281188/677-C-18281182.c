#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MOD 1000000007
int pre_cmp[2500][2];
char input[250000];
int ret(char target){
if(islower(target))
	target=target-('a')+36;
else if(isupper(target))
	target=target-('A')+10;
else if(target=='_')
	target=63;
else if(target=='-')
	target=62;
else if(isdigit(target))
	target=target-'0';
int a,b; int cnt=0;
for(a=0;a<=63;a++){
	for(b=0;b<=63;b++){
		if((a&b)==target)
			cnt++;
	}
}
	return cnt;
}
int main(int argc, char *argv[]){
	int a,b,c,d,e,f,g;
	gets(input);
	int i; int len=strlen(input); long long int res=1;

	for(i='1';i<='9';i++){
		pre_cmp[i][0]=ret(i);
	}
	for(i='a';i<='z';i++){
		pre_cmp[i][0]=ret(i);
	}
	for(i='A';i<='Z';i++){
		pre_cmp[i][0]=ret(i);
	}
	pre_cmp['_'][0]=ret('_');
	pre_cmp['-'][0]=ret('-');
	for(i=0;i<len;i++){
		if(input[i]=='_')
			continue;
		res=(res*(pre_cmp[input[i]][0]))%MOD;
	}
	printf("%lld",res);
}

	
