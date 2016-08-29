#include <stdio.h>

char mat[2010][1005];
int a[1005];

int main(int argc, char *argv[]) {
	int n;

	int i, j, k;
	int x, y;
	int up;
	int down;
	int sum = 0;
	char last;

	scanf(" %d", &n);

	for (i = 0; i < n; i++) {
		scanf(" %d", &a[i]);
		sum += a[i];
	}

	for (y = 0; y < 2005; y++) {
		for (x = 0; x < 1005; x++) {
			mat[y][x] = 1;
		}
	}

	x = 0;
	y = 1003;
	for (k = 0; k < n; k++) {
		while(a[k] > 0) {
			a[k]--;
			x++;
			if (k % 2 == 0) {
				if (last == '/') {
					y--;
				}
				mat[y][x] = '/';
				last = '/';
			} else {
				if (last == '\\') {
					y++;
				}
				mat[y][x] = '\\';
				last = '\\';
			}
		}
	}

	for (y = 0; y < 2005; y++) {
		for (x = 0; x < 1005; x++) {
			if (mat[y][x] != 1) {
				up = y;
				y = 2005;
				break;
			}
		}
	}

	for (y = 2004; y >= 0; y--) {
		for (x = 0; x < 1005; x++) {
			if (mat[y][x] != 1) {
				down = y;
				y = -1;
				break;
			}
		}
	}

	printf("up = %d, down = %d\n", up, down);

	for (y = up; y <= down; y++) {
		for (x = 1; x <= sum; x++) {
			if (mat[y][x] == 1) {
				printf(" ");
			} else {
				printf("%c", mat[y][x]);
			}
		}
		printf("\n");
	}
	return 0;
}
				
		
		
	
