#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d, e;
	char ZA[101], ZB[] = "miao.", ZC[] = "lala.";

	scanf("%d", &a);
	while (a--) {
		scanf("\n%[^\n]", ZA);
		for (b = 0; ZA[b] && ZB[b] && ZA[b] == ZB[b]; ++b);
		if (b < 5)
			c = 0;
		else
			c = 1;
		for (b = 0; ZA[b]; ++b);
		b -= 5;
		if (b < 0)
			d = 0;
		else {
			for (e = 0; e < 5 && ZA[b + e] == ZC[e]; ++e);
			if (e < 5)
				d = 0;
			else
				d = 1;
		}
		if (c && d || !c && !d)
			printf("OMG>.< I don't know!\n");
		else if (c)
			printf("Rainbow's\n");
		else
			printf("Freda's\n");
	}

	return 0;
}
			
