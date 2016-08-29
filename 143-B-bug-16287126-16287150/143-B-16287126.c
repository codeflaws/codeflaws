#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int w,i,j,k,l,g,r,b;
	char t;
	char str[10001];
	char ch[10001];
	scanf("%s",str);
	w=strlen(str);
	if (str[0]=='-'){
		printf("(");
	}
	printf("$");
	for (b=0;b<w;b++){
		if (str[b]=='.'){
			g=b;
			break;
		}
	}
	//printf("%d",b);
	if (b==w){
		if (str[0]!='-'){
			l=0;
			k=0;
			r=0;
			for (i=w-1;i>=0;i--){
				ch[k]=str[i];
				k=k+1;
				l=l+1;
				r=r+1;
				if (l%3==0 && r!=w){
					ch[k]=',';
					k=k+1;
					l=0;
				}
			}
		}
		else{
			l=0;
			k=0;
			r=0;
			for (i=w-1;i>=1;i--){
				ch[k]=str[i];
				k=k+1;
				l=l+1;
				if (l%3==0 && r!=w-1){
					ch[k]=',';
					k=k+1;
					l=0;
				}
			}
		}
		for (i=0;i<k/2;i++){
			t=ch[i];
			ch[i]=ch[k-i-1];
			ch[k-i-1]=t;
		}
		
		for (i=0;i<k;i++){
			printf("%c",ch[i]);
		}
		printf(".00");
	}
	else{
		if (str[0]!='-'){
			l=0;
			k=0;
			r=0;
			for (i=g-1;i>=0;i--){
				ch[k]=str[i];
				k=k+1;
				l=l+1;
				r=r+1;
				if (l%3==0 && r!=g){
					ch[k]=',';
					k=k+1;
					l=0;
				}
			}
		}
		else{
			l=0;
			k=0;
			r=0;
			for (i=g-1;i>=1;i--){
				ch[k]=str[i];
				k=k+1;
				l=l+1;
				r=r+1;
				if (l%3==0 && r!=g-1){
					ch[k]=',';
					k=k+1;
					l=0;
				}
			}
		}
	
	for (i=0;i<k/2;i++){
		t=ch[i];
		ch[i]=ch[k-i-1];
		ch[k-i-1]=t;
	}
	
	for (i=0;i<k;i++){
		printf("%c",ch[i]);
	}
	if (w-g>=3){
		for (i=g;i<g+3;i++){
			printf("%c",str[i]);
		}
	}
	else{
		for (i=g;i<w;i++){
			printf("%c",str[i]);
		}
		printf("0");
	}
	}
	if (str[0]=='-'){
		printf(")");
	}
	return 0;
}
