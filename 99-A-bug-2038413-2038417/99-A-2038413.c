#include <stdio.h>
#include <stdlib.h>

char s[1002], *t;
int c;

int main(int argc, char *argv[]) {
	t=s;
	c=getchar();
	do {
		*t++=c;
		c=getchar();
	} while (c!='.');
	*t++=c;
	*t=getchar();
	if (t[-2] == '9') {
		printf("GOTO Vasilia.\n");
	} else {
		if (*t>='5') {
			++t[-2];
		}
		t[-1]='\0';
		printf("%s\n", s);
	}
	exit(EXIT_SUCCESS);
return 0;
}
