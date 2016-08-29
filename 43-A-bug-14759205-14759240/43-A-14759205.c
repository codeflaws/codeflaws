#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int n,l,i;
	char c[1000];
	scanf("%d",&n);
	char str[10000][10];
	for (i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for (i=1;i<n;i++){
		if (strcmp(str[i],str[0])!=0){
			strcpy(c,str[i]);
			break;
		}
	}
	l=1;
	for (i=1;i<n;i++){
		if(strcmp (str[i],str[0])==0){
			l=l+1;
		}
	}
	if (l>n-l){
	printf("%s",str[0]);
	}
	else{
		printf("%s",c);
	}
	return 0;
}
