#include <stdio.h>

int main(int argc, char *argv[])
{
	int p[4], a, b, i, j, k, l, m, buf[5], count, result = 0;
	for(i = 0; i < 4; i++)
		scanf("%d", &p[i]);
	scanf("%d%d", &a, &b);
	for(i = a; i < b; i++) {
		count = 0;
		buf[0] = i;
		for(j = 0; j < 4; j++) {
			buf[1] = buf[0] % p[j];
			for(k = 0; k < 4; k++) {
				if(j == k)
					continue;
				buf[2] = buf[1] % p[k];
				for(l = 0; l < 4; l++) {
					if(j == l || k == l)
						continue;
					buf[3] = buf[2] % p[l];
					for(m = 0; m < 4; m++) {
						if(j == m || k == m || l == m)
							continue;
						buf[4] = buf[3] % p[m];
						if(i == buf[4])
							count++;
					}
				}
			}
		}
		if(count > 7)
			result++;
	}
	printf("%d\n", result);
	return 0;
}
