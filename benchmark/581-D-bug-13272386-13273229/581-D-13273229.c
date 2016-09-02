#include <stdio.h>
#include <math.h>

void printTop(int n, int p, int ii) {
	int i, j;

	printf("%d\n", n);

	for(i=0; i<p; i++) {
		for(j=0; j<n; j++) {
			printf("%c", 'A'+ii);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	int x[3], y[3], area, rt, max, i, j, p, a = -1, b, c, d, u, v;

	scanf("%d%d%d%d%d%d", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);

	area = x[0]*y[0] + x[1]*y[1] + x[2]*y[2];
	rt = sqrt(area);

	if(rt * rt == area) {
		//printf("%d\n", rt);
		max = 0;
		for(i=0; i<3; i++) {
			if(x[i] > max) {
				max = x[i];
				j = i;
			}
			if(y[i] > max) {
				max = y[i];
				j = i;
			}
		}

		if(rt == max) {
			if(x[j] != rt) {
				p = rt - x[j];
			} else {
				p = rt - y[j];
			}

			for(i=0; i<3; i++) {
				if(i != j) {
					if(a == -1) {
						a = x[i];
						b = y[i];
						u = i;
					} else {
						c = x[i];
						d = y[i];
						v = i;
					}
				}
			}
			if(a == p) {
				if(c == p && b+d == rt) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<p; i++) {
						for(j=0; j<b; j++) {
							printf("%c", 'A'+u);
						}
						for(j=0; j<d; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else if(d == p && b+c == rt) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<p; i++) {
						for(j=0; j<b; j++) {
							printf("%c", 'A'+u);
						}
						for(j=0; j<c; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else {
					printf("-1\n");
				}
			} else if(b == p) {
				if(c == p && a+d == rt) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<p; i++) {
						for(j=0; j<a; j++) {
							printf("%c", 'A'+u);
						}
						for(j=0; j<d; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else if(d == p && a+c == rt) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<p; i++) {
						for(j=0; j<a; j++) {
							printf("%c", 'A'+u);
						}
						for(j=0; j<c; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else {
					printf("-1\n");
				}
			} else if(a == rt) {
				if(c == rt && b+d == p) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<b; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+u);
						}
						printf("\n");
					}
					for(i=0; i<d; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else if(d == rt && b+c == p) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<b; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+u);
						}
						printf("\n");
					}
					for(i=0; i<c; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else {
					printf("-1\n");
				}
			} else if(b == rt) {
				if(c == rt && a+d == p) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<a; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+u);
						}
						printf("\n");
					}
					for(i=0; i<d; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else if(d == rt && a+c == p) {
					//
					printTop(rt, rt-p, j);
					for(i=0; i<a; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+u);
						}
						printf("\n");
					}
					for(i=0; i<c; i++) {
						for(j=0; j<rt; j++) {
							printf("%c", 'A'+v);
						}
						printf("\n");
					}
				} else {
					printf("-1\n");
				}
			}  else {
				printf("-1\n");
			}
		} else {
			printf("-1\n");
		}
	} else {
		printf("-1\n");
	}



	return 0;
}