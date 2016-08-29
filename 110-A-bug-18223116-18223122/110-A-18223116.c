#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int i,j,n,dem=0;
	char s[100];
	gets(s);
	for(i=0;s[i] != NULL;i++){
		if((s[i] == '4') && (s[i] == '7')){
			dem++;
		}
	}
	if((dem == 4) || (dem == 7))
	printf("YES");
	else
	printf("NO");
	return 0;
}
