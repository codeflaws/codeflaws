#include<stdio.h>
int main(int argc, char *argv[]){
	int f=0,s=0; 
	char c;
	while(c!='\n'){ 
		scanf("%c",&c); 
		f+=(c=='4'); 
		s+=(c=='7');
	}
	if(s==0 && f==0)printf("-1");
	else if(f>=s)printf("4");
	else printf("7");		
	return 0;
}
