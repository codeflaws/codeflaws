#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char s[110];
	gets(s);
	int l=strlen(s),i,j,c=1,flag=0;
	for(i=0;i<l;i++){
		if(s[i]=='/'&&s[i+1]=='/') s[i]='#';
	}
	for(i=l-1;i>=0;i--){
		if(s[i]=='#'&&(s[i-1]>='a'&&s[i-1]<='z')){
			flag=1;
			break;
		}
	}
	if(flag){
		if(s[l-1]=='/') s[l-1]='#';
	}
	for(i=0;i<l;i++){
		if(s[i]!='#') printf("%c",s[i]);
	}
	return 0;
}
