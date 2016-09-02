#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	int ZA[8];

	scanf("%d", &a);
	ZA[1] = ZA[2] = ZA[3] = ZA[4] = ZA[6] = 0;
	for (b = 0; b < a; ++b) {
		scanf("%d", &c);
		if (c == 5 || c == 7)
			break;
		else
			ZA[c] += 1;
	}
	if (b < a) {
		printf("-1\n");
	} else {
		if (ZA[1] == ZA[2] + ZA[3] && ZA[2] == ZA[6] - ZA[3] + ZA[4]) {
			while (ZA[1]) {
				printf("1");
				if (ZA[2]) {
					printf(" 2");
					ZA[2] -= 1;
					if (ZA[4]) {
						printf(" 4");
						ZA[4] -= 1;
					} else {
						printf(" 6");
						ZA[6] -= 1;
					}
				} else {
					printf(" 3 6");
					ZA[3] -= 1;
					ZA[6] -= 1;
				}
				printf("\n");
				ZA[1] -= 1;
			}
		} else {
			printf("-1\n");
		}
	}

	return 0;
}
