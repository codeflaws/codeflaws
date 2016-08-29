#include <stdio.h>

int main(int argc, char *argv[])
{

	int  n, a[100], c, b = 0, max = 0, min = 999, v, max1, min1,e,f=0;
	scanf("%d", &n);
	for (c = 0; c < n; c++){
		scanf("%d", &a[c]);
		if (a[c]>=max){
			max = a[c];
			max1 = c;
		}
		if (a[c] <= min){
			min = a[c];
			min1 = c;
		}
	}
	if (max1 > min1)f = 1;
	while (1){
		if (max1 != 0){
			e = a[max1];
			a[max1] = a[max1 - 1];
			a[max1 - 1] = e;
			max1--;
			b++;
		}
		
		if (max1 == 0 )break;
	}
	if (f == 1)min1 = min1 + 1;
	while (1){
		if (min1 != n - 1){
			e = a[min1];
			a[min1] = a[min1 + 1];
			a[min1 + 1] = e;
			min1++;
			b++;
		}
		if (min1 == n - 1)break;

	}
	printf("%d", b);
	return 0;
}