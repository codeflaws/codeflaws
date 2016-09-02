#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIMIAR 0.004

typedef struct tcompetidor {
	double height;
	int id;
} tcompetidor;

int ordena(const void *o1, const void *o2) {
	tcompetidor *c1 = (tcompetidor*) o1;
	tcompetidor *c2 = (tcompetidor*) o2;
	
	if (c1->height > (c2->height+LIMIAR))
		return -1;
	if (c1->height < (c2->height-LIMIAR))
		return 1;
	
	if (c1->id > c2->id)
		return 1;
	else
		return -1;
	
	return 0;
}

int main(int argc, char *argv[])
{
	int n, t1, t2, k;
	double kf;
	tcompetidor l[1024];
	int i, a, b;
	double h1, h2;
	
	scanf("%d %d %d %d", &n, &t1, &t2, &k);
	
	kf = 1.0 - ((double)k)/100.0;
	
	for (i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		h1 = a*t1*kf + b*t2;
		h2 = b*t1*kf + a*t2;
		l[i].id = i;
		
		printf("h1 = %lf, h2 = %lf\n", h1, h2);
		
		l[i].height = (h1 > h2) ? h1 : h2;
	}
	
	qsort(l, n, sizeof(tcompetidor), ordena);
	
	for (i = 0; i < n; ++i)
		printf("%d %.2lf\n", l[i].id+1, l[i].height);
	
	return 0;
}