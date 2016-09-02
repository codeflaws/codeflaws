#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, t;
	scanf("%d %d", &a, &b);
	for (t=0; b>=22||(a>=2&&b>=2)||(a>=1&&b>=12); ++t) {
		if (t%2==0) { b-=2; a-=(b>=0?2:b==-1?12:22); }
		else {
			if (b>=22) b-=22;
			else if (b>=12) { b-=12; a-=1; }
			else { b-=2; a-=2; }
		}
	}
	printf("%s\n", t%2 ? "Ciel" : "Hanako");
	exit(EXIT_SUCCESS);
return 0;
}
