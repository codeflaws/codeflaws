#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int i,j,k,w,g,l;
	char str[10001];
	char ch[10000];
	int ara[10000];
	scanf("%s",str);
	w=strlen(str);
	k=0;
	for (i=0;i<w;i++){
		if (str[i]=='/'){
			ara[k]=i;
			k=k+1;
		}
	}
	if (k==w){
		printf("%s",str);
	}
	else{
	if (str[w-1]=='/'){
		for (i=0;i<k-1;i++){
			if (ara[i+1]-ara[i]!=1){
				for (j=ara[i];j<ara[i+1];j++){
					printf("%c",str[j]);
				}
			}
		}
	
	
	}
	else{
		for (i=0;i<k-1;i++){
			if (ara[i+1]-ara[i]!=1){
				for (j=ara[i];j<ara[i+1];j++){
					printf("%c",str[j]);
				}
			}
		}
		l=0;
		for (i=w-1;str[i]!='/';i--){
			ch[l]=str[i];
			l=l+1;
		}
		printf("/");
		for (i=l-1;i>=0;i--){
			printf("%c",ch[i]);
		}
		
	}
	}
	return 0;
}
