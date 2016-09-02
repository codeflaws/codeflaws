#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i,j;
	char s[100];
	gets(s);
	if (strlen(s) >= 7)
	for (i=0;i<strlen(s) - 7;i++){
		if ((s[i] == s[i+1]) && (s[i] == s[i+2]) && (s[i] == s[i+3]) && (s[i] == s[i+4]) && (s[i] == s[i+5]) && (s[i] == s[i+6])){
			printf("YES");
			goto ketthuc;
		}
	}
	
	printf("NO");
	ketthuc:
	return 0;
}
