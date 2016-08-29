#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *a, cnt = 0;

void alloc(int n, int m, int *mem) {
	int i, j, good;

	for (i = n; i <= m; i++) {
		good = 1;
		for (j = i - 1; j >= i - n; j--)
			if (mem[j]) {
				good = 0;
				break;
			}
		if (good == 1) {
			a[cnt++] = n;
			printf("%d\n", cnt);
			for (j = i - 1; j >= i - n; j--)
				mem[j] = cnt;
			return;
		}
	}
	printf("NULL\n");
}

void defragment(int m, int *mem) {
	int i, k, *tmp;

	tmp = calloc(m, sizeof(int));
	k = 0;
	for (i = 0; i < m; i++)
		if (mem[i])
			tmp[k++] = mem[i];
	memcpy(mem, tmp, sizeof(int) * m);
}

void erase(int x, int m, int *mem) {
	int i, erased = 0;

	for (i = 0; i < m; i++)
		if (mem[i] == x) {
			erased = 1;
			mem[i] = 0;
		}
	if (!erased)
		printf("ILLEGAL_ERASE_ARGUMENT\n");
}

int main(int argc, char *argv[]) {
	char command[32], *tmp;
	int i, t, m, *mem;

	scanf("%d %d\n", &t, &m);
	mem = calloc(m, sizeof(int));
	a = malloc(sizeof(int) * t);
	tmp = malloc(32);
	for (i = 0; i < t; i++) {
		fgets(command, 32, stdin);
		if (command[0] == 'a') {
			tmp = strchr(command, ' ') + 1;
			alloc(atoi(tmp), m, mem);
		} else if (command[0] == 'e') {
			tmp = strchr(command, ' ') + 1;
			erase(atoi(tmp), m, mem);
		} else
			defragment(m, mem);
	}
	return 0;
}
