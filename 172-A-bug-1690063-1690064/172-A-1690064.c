#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int n;
	int len;
	char phonenum[21];
	scanf("%d", &n);
	scanf("%s\n", phonenum);
	len = strlen(phonenum);
	while(--n){
		char tmp[21];
		int i;
		scanf("%s\n", tmp);
		for(i=0; i<len; ++i){
			if(phonenum[i] != tmp[i]){
				len = i;
				break;
			}
		}
	}
	printf("%d\n", len);
	return 0;
}
