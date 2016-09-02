#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	int i,j,n,b;
	char a[50] = {0};
	scanf("%s",a);
	n = strlen(a);
	if(a[0]=='h'){
		printf("http://");
		b = 4;
	}
	else{
		printf("ftp://");
		b = 3;
	}
	for(i = b ; i < n ; i++)
		if(a[i]=='r'&&a[i+1]=='u'){
			for(j = b ; j < i ; j++)
				printf("%c",a[j]);
			printf(".ru");
			break;
		}
	if(a[i+2]){
		printf("/");
		for(j = i+2 ; j < n ; j++)
			printf("%c",a[j]);
	}
return 0;
}
