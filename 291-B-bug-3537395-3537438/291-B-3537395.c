#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100005
char a[MAX];
int main(int argc, char *argv[]){
int i;
char b='"';
	scanf("%[^\n]s",a);
	//printf("%c",b);
int n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]==b){
			printf("<");
			i++;
			while(a[i]!=b)
				printf("%c",a[i++]);
			printf(">\n");
		}
		if(isalpha(a[i])){
			printf("<");
			while(a[i]!=' ' && i<n)
				printf("%c",a[i++]);
			printf(">\n");
		}
	}
return 0;
}
