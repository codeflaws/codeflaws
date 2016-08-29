#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[]){
	int x,i,y=0;
	char str[100];
	scanf("%s",str);
	for(x=0;str[x];x++)
	if(str[x]<=122&&str[x]>=97)
		y++;
		
	if(y==1){
		if(str[0]<=122&&str[0]>=97){
		str[0]=toupper(str[0]);
		for(i=1;str[i];i++){
		str[i]=tolower(str[i]);}
		printf("%s",str);}
	else
		printf("%s",str);}
	else
		if(y==0){
		for(i=1;str[i];i++){
		str[i]=tolower(str[i]);}
		printf("%s",str);}
		
		else{
			printf("%s",str);}
		return 0;}