#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i,j,n,dem=0;
	char s[100];
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if ((s[i] == 'H') || (s[i] == 'Q') || (s[i] == '9') || (s[i] == '+')){
			printf("YES");
			return 0;
		}
	}
	
	printf("NO");

	return 0;
}
