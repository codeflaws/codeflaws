#include <stdio.h>

int main(int argc, char *argv[])
{
	int p1, p2, p3, t1, t2, n, lr, l, r, e = 0;
	
	scanf("%d %d %d %d %d %d", &n, &p1, &p2, &p3, &t1, &t2);
	
	scanf("%d %d", &l, &r);
	e += (r - l) * p1;
	lr = r;
	
	while(-- n)
	{
		scanf("%d %d", &l, &r);
		e += (r - l) * p1;
		if(l - lr <= t1)
			e += (l - lr) * p1;
		else
		{
			e += t1 * p1;
			if(l - lr <= t1 + t2)
				e += (l - lr - t1) * p2;
			else
				e += t2 * p2 + (l - lr - t1 - t2) * p3;
		}
	}
	
	printf("%d\n", e);

	return 0;
}
