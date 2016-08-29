#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

long long int prize2[6];
int main(int argc, char *argv[])
{
	int n; long long int prize[6], cho[51], rem = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%lld", &cho[i]);
	for (int i = 0; i < 5; i++) scanf("%lld", &prize[i]);
	for (int i = 0; i < n; i++)
	{
		int m = 4;
		while (m >= 0)
		{
			if (cho[i] < prize[m])
			{
				m--;
				continue;
			}
			prize2[m] += cho[i] / prize[m];
			cho[i] %= prize[m];
		}
		rem += cho[i];
		m = 4;
		while (m >= 0)
		{
			if (rem < prize[m])
			{
				m--;
				continue;
			}
			prize2[m] += rem / prize[m];
			rem %= prize[m];
		}
	}
	for (int i = 0; i < 5; i++) printf("%lld ", prize2[i]);
	printf("\n%d\n", rem);
	return 0;
}
