#include <stdio.h>

char *postfix[] = {"1869", "8961", "1689", "6198", "1698", "8916", "1896"};

int main(int argc, char *argv[]) {
	int frq[10], n;
	char str[1000004];
	memset(str, 0, 10000003);
	memset(frq, 0, 10);
	
	int c, i, j, index = 0, res = 0;
	while ((c = getchar()) != EOF) {
		frq[c-'0']++;
	}
	
	frq[1]--;
	frq[6]--;
	frq[8]--;
	frq[9]--;
	for (i = 1; i <= 9; i++) {
		for (j = 0; j < frq[i]; j++) {
			str[index++] = i + '0';
			res = (10 * res + i) % 7;
		}
	}
	
	for (i = 0; i < 4; i++) res = (10 * res) % 7;
	
	if (index > 0) printf("%s", str);
	printf("%s", postfix[(7 - res)%7]);
	for (i = 0; i < frq[0]; i++) putchar('0');
	return 0;
}