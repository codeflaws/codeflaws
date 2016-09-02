#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, i, p = 0;
		scanf("%d", &n);
		int v[n];
		for(i = 0; i < n; i++)
			scanf("%d", &v[i]);
		if (v[0] == 1)
			p++;
		if (v[n-1] == 1 && n-1 != 0)
			p++;
		for(i = 1; i < n-1; i++) {
			if (v[i] == 1)
				p++;
			else if(v[i+1] == 1 && v[i-1] == 1)
				p++;
		}
	printf("%d\n", p);
	return 0;
}
