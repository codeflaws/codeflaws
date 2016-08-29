#include <stdio.h>
#include <string.h>

int a, b, c, d;
char ZA[51], ZB[51];
char ZC[100000][2][51];
int main(int argc, char *argv[])
{
	scanf("%d", &a);
	for (b = 0; b < a; ++b) {
		scanf("%s%s", ZA, ZB);
		if (strcmp(ZA, ZB) < 0) {
			strcpy(ZC[b][0], ZA);
			strcpy(ZC[b][1], ZB);
		} else {
			strcpy(ZC[b][0], ZB);
			strcpy(ZC[b][1], ZA);
		}
	}
	scanf("%d", &c);
	for (b = 1; b < a; ++b) {
		scanf("%d", &d);
		if (strcmp(ZC[d - 1][1], ZC[c][0]) < 0)
			break;
		else if (strcmp(ZC[d - 1][0], ZC[c][0]) < 0)
			strcpy(ZC[d - 1][0], ZC[d - 1][1]);
		c = d - 1;
	}
	if (b < a)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}
