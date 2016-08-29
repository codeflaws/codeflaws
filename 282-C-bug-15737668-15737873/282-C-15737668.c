#include<stdio.h>
#include<string.h>
char s[1000005],c[1000005],s1[1000005],c1[1000005];
int main(int argc, char *argv[]){
	scanf("%s",&s);
	scanf("%s",&c);
	int lens=strlen(s);
	int lenc=strlen(c);
	if(lens!=lenc){
		printf("NO");
		return 0;
	}
	int e=0,d=0;
	for(int i=0;i<lens;i++){
		if(s[i]=='1')
			e++;
		if(c[i]=='1')
			d++;
	}
	if(e>=d){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}