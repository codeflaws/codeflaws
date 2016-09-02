#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int a[100002];

int main(int argc, char *argv[])
{
	int n, t, p1 = 1, max = 0, sum = 0, ct = 0;
	scanf("%d %d", &n, &t);
	for (int i = 1; i <= n; i++) scanf(" %d", &a[i]);
	for (int p2 = 1; p2 <= n; p2++)
	{
		sum -= a[p2 - 1];
		while (sum < t && p1 <= n)
		{
			sum += a[p1];
			ct++;
			p1++;
		} 
		if (sum > t) ct--;
		if (ct > max) max = ct;
		if (sum == t) ct--;
	}
	printf("%d\n", max);
	return 0;
}