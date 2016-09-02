#include<stdio.h>
#include<string.h>
int n,i;
char a[144],a1[144],aa[144];
int main(int argc, char *argv[]){
	scanf("%s %s",a,a1);
	n=strlen(a1);
	if(a[n-1]=='z'&& a1[n-1]=='a' ){
		if(n!=4)
			printf("No such string");
		return 0;
	}
	n=strlen(a1);
	for(i=0;i<n-1;i++)
		aa[i]=a1[i];
	aa[n-1]=a1[n-1]-1;
	if(strcmp(a,aa)==0){
		printf("No such string");
		return 0;
	}
	if(a1[n-1]=='a'){
		for(i=0;i<n-1;i++)                  
			printf("%c",a[i]);                 
		printf("%c",a[n-1]+1);    
		return 0;
	
	}
	if(strcmp(a,a1)==0)
		printf("No such string");
	else
		if(n>1){
			for(i=0;i<n-1;i++)
				printf("%c",a1[i]);
			printf("%c",a1[strlen(a1)-1]-1);
		}
		else
			printf("%c",a1[strlen(a1)-1]-1);
}
