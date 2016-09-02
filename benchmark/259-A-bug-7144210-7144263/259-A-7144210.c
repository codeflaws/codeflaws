#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, d, e;
	char c;
	char ZA[] = {'W', 'B'};

	e = 0;
	for (a = 0; e == 0 && a < 8; ++a) {
		scanf("%c", &c);
		if (c == 'W')
			d = 1;
		else
			d = 0;
		for (b = 0; b < 7; ++b) {
			scanf("%c", &c);
			if (c != ZA[d]) {
				e = 1;
				break;
			} else {
				d = 1 - d;
			}
		}
		scanf("\n");
	}
	if (a == 8)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
			
