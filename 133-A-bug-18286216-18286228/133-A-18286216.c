#include <string.h>
#include <stdio.h>

char string[100];

int main(int argc, char *argv[]) {
	int i, flag = 0;

	scanf("%s", string);
	
	for (i = 0; i < strlen(string); i++) {
		if (string[i] == 'H' || string[i] == 'Q' || 
			string[i] == '9' || string[i] == '+') {	
			flag = 1;
			break;
		}
	}

	if (flag) printf("YES\n");
	else 	  printf("NO\n");

	return 0;
}
