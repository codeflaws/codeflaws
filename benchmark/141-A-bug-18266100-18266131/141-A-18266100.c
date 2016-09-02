#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i,j,n,le=0,chan=0,k,a,b;
	char s1[100],s2[100],s[100];
	scanf("%s",&s1);
	scanf("%s",&s2);
	scanf("%s",&s);
	strcat(s1,s2);
	a=strlen(s1);
	b=strlen(s);
	if (a != b){
	printf("NO");
	return 0;
	}
	for(i=0;i<a;i++)
	for(j=0;j<b;j++)
	if (s1[i] == s[j]){
		s[j] = '0';
		break;
	}
	for(i=0;i<b;i++)
	if (s[i] != '0'){
	printf("NO");
	return 0;
	}
	printf("YES");
	return 0;
}