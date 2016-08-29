#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	double x, y, z;
	
	double max;
	int ind = 0;
	
	scanf("%lf %lf %lf", &x, &y, &z);
	
	if (x - 1.0 < -1e-6 && y - 1.0 < -1e-6 && z - 1.0 < -1e-6) {
		
		max = 1000000;
		
		if (z * log(y) + log(log(1 / x)) - max < -1e-6) {
			max = z * log(y) + log(log(1 / x));
			ind = 1;
		}
// printf("%.15lf\n", z * log(y) + log(log(1 / x)));
		if (y * log(z) + log(log(1 / x)) - max < -1e-6) {
			max = y * log(z) + log(log(1 / x));
			ind = 2;
		}
// printf("%.15lf\n", y * log(z) + log(log(1 / x)));
		if (log(y) + log(z) + log(log(1 / x)) - max < -1e-6) {
			max = log(y) + log(z) + log(log(1 / x));
			ind = 3;
		}
// printf("%.15lf\n", log(y) + log(z) + log(log(1 / x)));
		
		
	if (z * log(x) + log(log(1 / y)) - max < -1e-6) {
			max = z * log(x) + log(log(1 / y));
			ind = 5;
		}
// printf("%.15lf\n", z * log(x) + log(log(1 / y)));
		if (x * log(z) + log(log(1 / y)) - max < -1e-6) {
			max = x * log(z) + log(log(1 / y));
			ind = 6;
		}
// printf("%.15lf\n", x * log(z) + log(log(1 / y)));
		if (log(x) + log(z) + log(log(1 / y)) - max < -1e-6) {
			max = log(x) + log(z) + log(log(1 / y));
			ind = 7;
		}
// printf("%.15lf\n", log(x) + log(z) + log(log(1 / y)));
		
		
	if (y * log(x) + log(log(1 / z)) - max < -1e-6) {
			max = y * log(x) + log(log(1 / z));
			ind = 9;
		}
// printf("%.15lf\n", y * log(x) + log(log(1 / z)));
		if (x * log(y) + log(log(1 / z)) - max < -1e-6) {
			max = x * log(y) + log(log(1 / z));
			ind = 10;
		}
// printf("%.15lf\n", x * log(y) + log(log(1 / z)));
		if (log(x) + log(y) + log(log(1 / z)) - max < -1e-6) {
			max = log(x) + log(y) + log(log(1 / z));
			ind = 11;
		}
// printf("%.15lf\n", log(x) + log(y) + log(log(1 / z)));
		
		
	} else {
		
		max = -1000;
		
		if (x - 1.0 > 0.01) {
			if (z * log(y) + log(log(x)) - max > 1e-6) {
				max = z * log(y) + log(log(x));
				ind = 1;
			}
// printf("%.15lf\n", z * log(y) + log(log(x)));
			if (y * log(z) + log(log(x)) - max > 1e-6) {
				max = y * log(z) + log(log(x));
				ind = 2;
			}
// printf("%.15lf\n", y * log(z) + log(log(x)));
			if (log(y) + log(z) + log(log(x)) - max > 1e-6) {
				max = log(y) + log(z) + log(log(x));
				ind = 3;
			}
// printf("%.15lf\n", log(y) + log(z) + log(log(x)));
		}
		
		if (y - 1.0 > 0.01) {
			if (z * log(x) + log(log(y)) - max > 1e-6) {
				max = z * log(x) + log(log(y));
				ind = 5;
			}
// printf("%.15lf\n", z * log(x) + log(log(y)));
			if (x * log(z) + log(log(y)) - max > 1e-6) {
				max = x * log(z) + log(log(y));
				ind = 6;
			}
// printf("%.15lf\n", x * log(z) + log(log(y)));
			if (log(x) + log(z) + log(log(y)) - max > 1e-6) {
				max = log(x) + log(z) + log(log(y));
				ind = 7;
			}
// printf("%.15lf\n", log(x) + log(z) + log(log(y)));
		}
		
		if (z - 1.0 > 0.01) {
			if (y * log(x) + log(log(z)) - max > 1e-6) {
				max = y * log(x) + log(log(z));
				ind = 9;
			}
// printf("%.15lf\n", y * log(x) + log(log(z)));
			if (x * log(y) + log(log(z)) - max > 1e-6) {
				max = x * log(y) + log(log(z));
				ind = 10;
			}
// printf("%.15lf\n", x * log(y) + log(log(z)));
			if (log(x) + log(y) + log(log(z)) - max > 1e-6) {
				max = log(x) + log(y) + log(log(z));
				ind = 11;
			}
// printf("%.15lf\n", log(x) + log(y) + log(log(z)));
		}
	}
	
	switch (ind) {
		case 1:
			printf("x^y^z\n");
			break;
		case 2:
			printf("x^z^y\n");
			break;
		case 3:
			printf("(x^y)^z\n");
			break;
		case 4:
			printf("(x^z)^y\n");
			break;
		case 5:
			printf("y^x^z\n");
			break;
		case 6:
			printf("y^z^x\n");
			break;
		case 7:
			printf("(y^x)^z\n");
			break;
		case 8:
			printf("(y^z)^x\n");
			break;
		case 9:
			printf("z^x^y\n");
			break;
		case 10:
			printf("z^y^x\n");
			break;
		case 11:
			printf("(z^x)^y\n");
			break;
		case 12:
			printf("(z^y)^x\n");
			break;
		default:
			printf("ERROR\n");
	}
	
	return 0;
	
}