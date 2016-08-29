#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char string[100];

int main(int argc, char *argv[]) { 
	int i, n, len; 

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", string);
		if (strlen(string) < 10) { 
			printf("%s\n", string);
		} else {
			len = strlen(string);
			printf("%c%d%c\n", string[0], len-2, string[len-1]);
		}
	}

	return 0;
}
