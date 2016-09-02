#include <stdio.h>

typedef struct x {
	int speed;
	int RAM;
	int HDD;
	int cost;
	int flag;
} y;

int main(int argc, char *argv[]) {
	
	y v[100];
	int i, j, n, index = 0, cost = 1000;
	
	scanf ("%d", &n);
	for (i = 0; i < n; i++) {
		scanf (" %d %d %d %d", &v[i].speed, &v[i].RAM, &v[i].HDD, &v[i].cost);
		v[i].flag = 1;
	}
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n && v[i].flag == 1; j++) {
			if (v[i].speed < v[j].speed && v[i].RAM < v[j].RAM && v[i].HDD < v[j].HDD) {
				v[i].flag = 0;
/*				printf ("laptop %d outdated in relation to %d\n", i, j);*/
			}
		}
	for (i = 0; i < n; i++)
		if (v[i].flag && cost > v[i].cost) {
			cost = v[i].cost;
			index = i + 1;
		}
	printf ("%d", index);
	return 0;
}
