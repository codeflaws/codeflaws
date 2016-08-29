#include <stdio.h>

int main(int argc, char *argv[]) {
	char *p,*q,s[201];
	scanf("%s\n",s);
	int ms=0;
	for (p=s,q=p-2;*p;p++) {
		if (*p=='@')
			if (p-q<3) break;
			else q=p;
			ms=1;
	}
	int first=1;
	if (*p||*(p-1)=='@'||!ms) printf("No solution\n");
	else {
		for (p=s+1,q=s;*p;p++,q++) {
			if (*p=='@') {
				if (!first) printf(",");
				first=0;
			}
			printf("%c",*q);
		}
		printf("%s\n",q);
	}
	return 0;
}
