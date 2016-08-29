#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m, i, max1, max2, max3, a[100000];
	scanf("%d", &m);
	n = 0;
	max1 = -1;
	max2 = -1;
	max3 = -1;
	while (m--) {
		fprintf(stderr, "%d %d %d\n", max1, max2, max3);
		scanf("%d", &i);
		if (i == 0) {
			for (i = 0; i < n; ++i)
				if (i == max1)
					puts("pushStack");
				else if (i == max2)
					puts("pushQueue");
				else if (i == max3)
					puts("pushBack");
				else
					puts("pushFront");
			if (n == 0)
				puts("0");
			else if (n == 1)
				puts("1 popStack");
			else if (n == 2)
				puts("2 popStack popQueue");
			else
				puts("3 popStack popQueue popBack");
			n = 0;
			max1 = -1;
			max2 = -1;
			max3 = -1;
		} else {
			a[n] = i;
			if (max1 == -1 || a[n] > a[max1]) {
				max3 = max2;
				max2 = max1;
				max1 = n;
			}
			else if (max2 == -1 || a[n] > a[max2]) {
				max3 = max2;
				max2 = n;
			}
			else if (max3 == -1 || a[n] > a[max3])
				max3 = n;
			++n;
		}
	}
	return 0;
}
