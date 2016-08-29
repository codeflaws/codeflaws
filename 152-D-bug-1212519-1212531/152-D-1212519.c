#include <stdio.h>
#include <string.h>

char a[1000][1001];

char r[16][1000][1001];

typedef struct {
	int x, y;
} point;

point rcoords[16][2];

int fill(int rc, int x1, int y1, int x2, int y2) {
	int i;
	if (x1 == x2) {
		for (i = y1; i <= y2; i++)
			r[rc][x1][i] = '#';
	} else if (y1 == y2) {
		for (i = x1; i <= x2; i++)
			r[rc][i][y1] = '#';
	}
}

int inters(int x1, int y11, int y12, int x21, int x22, int y2, int *x, int *y) {
	// puts("inters");
	if (!(x21 <= x1 && x1 <= x22))
		return 0;
	if (!(y11 <= y2 && y2 <= y12))
		return 0;

	*x = x1;
	*y = y2;
	return 1;
}

int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d%d", &n, &m);

	int i;
	for (i = 0; i < n; i++)
		scanf("%s", a[i]);

	int vn = 0, vx[1000], vy1[1000], vy2[1000],
		hn = 0, hy[1000], hx1[1000], hx2[1000];

	int x, y;
	for (x = 0; x < n; x++) {
		// printf("x = %d\n", x);
		y = 0;
		while (y < m) {
			while (y < m && a[x][y] == '.')
				y++;
			
			if (y >= m)
				break;

			vx[vn] = x;
			vy1[vn] = y;
			while (y < m && a[x][y] == '#')
				y++;
			vy2[vn] = y-1;

			if (vy2[vn]-vy1[vn]+1 < 3)
				continue;

			// printf("%d %d %d\n", vx[vn], vy1[vn], vy2[vn]);

			vn++;
		}
	}

	for (y = 0; y < m; y++) {
		x = 0;
		// printf("y = %d\n", y);
		while (x < n) {
			// printf("x = %d\n", x);
			while (x < n && a[x][y] == '.')
				x++;
			
			if (x >= n)
				break;

			hy[hn] = y;
			hx1[hn] = x;
			while (x < n && a[x][y] == '#')
				x++;
			hx2[hn] = x-1;

			if (hx2[hn]-hx1[hn]+1 < 3)
				continue;

			// printf("h %d %d %d\n", hy[hn], hx1[hn], hx2[hn]);
			hn++;
		}
	}

	printf("%d %d\n", hn, vn);

	if (hn > 4) {
		for (i = 2; i <= 3; i++) {
			hy[i] = hy[hn-(4-i)];
			hx1[i] = hx1[hn-(4-i)];
			hx2[i] = hx2[hn-(4-i)];
		}
		hn = 4;
	}

	if (vn > 4) {
		for (i = 2; i <= 3; i++) {
			vx[i] = vx[vn-(4-i)];
			vy1[i] = vy1[vn-(4-i)];
			vy2[i] = vy2[vn-(4-i)];
		}
		vn = 4;
	}

	// puts("!");

	int i1, i2, j1, j2;
	int rc = 0;
	memset(r, '.', sizeof(r));
	for (i1 = 0; i1 < vn; i1++)
		for (i2 = i1; i2 < vn; i2++)
			for (j1 = 0; j1 < hn; j1++)
				for (j2 = j1; j2 < hn; j2++) {
					// printf("i,j: %d %d %d %d", i1, i2, j1, j2);
					int x1, y1, x2, y2, x3, y3, x4, y4;
					int b1 = inters(vx[i1], vy1[i1], vy2[i1],
							hx1[j1], hx2[j1], hy[j1],
							&x1, &y1);
					int b2 = inters(vx[i2], vy1[i2], vy2[i2],
							hx1[j1], hx2[j1], hy[j1],
							&x2, &y2);
					int b3 = inters(vx[i1], vy1[i1], vy2[i1],
							hx1[j2], hx2[j2], hy[j2],
							&x3, &y3);
					int b4 = inters(vx[i2], vy1[i2], vy2[i2],
							hx1[j2], hx2[j2], hy[j2],
							&x4, &y4);

					if (!(b1 && b2 && b3 && b4))
						continue;
					if (y1 != y2 || x2-x1 < 2)
						continue;
					if (x1 != x3 || y3-y1 < 2)
						continue;
					if (x2 != x4 || y4-y2 < 2)
						continue;
					if (y3 != y4 || x4-x3 < 2)
						continue;

					fill(rc, x1, y1, x2, y2);
					fill(rc, x2, y2, x4, y4);
					fill(rc, x3, y3, x4, y4);
					fill(rc, x1, y1, x3, y3);

					point coords[2] = {{x1, y1}, {x4, y4}};
					memcpy(rcoords[rc], coords, sizeof(coords));
					/* for (x = 0; x < n; x++) {
						for (y = 0; y < m; y++)
							putchar(r[rc][x][y]);
						putchar('\n');
					} */

					rc++;
				}

	// puts("!!");

	int j;
	for (i = 0; i < rc; i++)
		for (j = i; j < rc; j++) {
			int f = 1;
			for (x = 0; x < n && f; x++) {
				for (y = 0; y < m && f; y++) {
					if (r[i][x][y] == '#' || r[j][x][y] == '#') {
						if (a[x][y] != '#')
							f = 0;
					} else
						if (a[x][y] != '.')
							f = 0;
				}
			}

			if (f) {
				puts("YES");
				printf("%d %d %d %d\n", rcoords[i][0].x+1, rcoords[i][0].y+1,
						rcoords[i][1].x+1, rcoords[i][1].y+1);
				printf("%d %d %d %d\n", rcoords[j][0].x+1, rcoords[j][0].y+1,
						rcoords[j][1].x+1, rcoords[j][1].y+1);
				return 0;
			}
		}

	puts("NO");

	return 0;
}
