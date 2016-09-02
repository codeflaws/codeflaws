#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, m, d, h, i, dd=-1, hh=-1, max=0, x, imp=0;

	scanf("%d%d", &n, &m);
	for(i=0; i<m; i++) {
		scanf("%d%d", &d, &h);
		if(dd>0) {
			if(h-hh > d-dd || h-hh > d-dd) {
				imp = 1;
			} else {
				if(h > hh) {
					x = h + (d-dd - (h-hh))/2;
				} else if(h < hh) {
					x = hh + (d-dd - (hh-h))/2;
				} else {
					x = h + (d-dd)/2;
				}
			}
		} else {
			x = h+d-1;
		}
		if(x > max) {
			max = x;
		}
		dd = d;
		hh = h;
	}

	x = h + (n-d);
	if(x > max) {
		max = x;
	}

	if(imp) {
		printf("IMPOSSIBLE\n");
	} else {
		printf("%d\n", max);
	}

	return 0;

}