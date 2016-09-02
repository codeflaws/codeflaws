#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	freopen("in.txt", "r", stdin);
	char line[10];
	int i, j, n, r=0, c=0;
	for(i=0 ; i<8 ; i++) {
		gets(line);
		n = 0;
		for(j=0 ; j<8 ; j++) {
			if(line[j]=='B') n++;
		}
		if(n==8) {
			r++;
		} else {
			c = n>c?n:c;
		}
	}
	printf("%d", r+c);
	return 0;
}
