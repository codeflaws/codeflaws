#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int n,d,i;
	scanf("%d",&n);
	char s[1000][1000];
	for (i=0;i<n;i++) gets(s[i]);
	for (i=0;i<n;i++){
		d = strlen(s[i]);
		if (d > 10)
			printf("%c%d%c",s[i][0],d-2,s[i][d-1]);
		else
			printf("%s",s[i]);
		printf("\n");
	}
	
	return 0;
}
