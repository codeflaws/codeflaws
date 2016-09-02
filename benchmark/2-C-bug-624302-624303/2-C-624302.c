#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int x[3], y[3], r[3];
const double eps = 1e-6;
double sqr(double a)
{
	return a * a;
}
double fval(double cx, double cy)
{
	double tmp[3], sum = 0, res = 0;
	int i;
	for(i = 0; i < 3; i++) {
		tmp[i] = sqrt(sqr(x[i] - cx) + sqr(y[i] - cy)) / r[i];
		sum += tmp[i];
	}
	sum /= 3;
	for(i = 0; i < 3; i++) {
		res += sqr(tmp[i] - sum);
	}
	return res / 3;
}
int main(int argc, char *argv[])
{
	double cx = 0, cy = 0, d = 1, cur;
	int i;
	for(i = 0; i < 3; i++) {
		scanf("%d%d%d", x + i, y + i, r + i);
		cx += x[i], cy += y[i];
	}
	cx /= 3, cy /= 3;
	while(d > eps) {
		cur = fval(cx, cy);
		if(fval(cx + d, cy) < cur) { cx += d; }
		else if(fval(cx - d, cy) < cur) { cx -= d; }
		else if(fval(cx, cy + d) < cur) { cy += d; }
		else if(fval(cx, cy - d) < cur) { cy -= d; }
		else { d *= 0.5; }
	}
	if(fval(cx, cy) < eps) 
		printf("%.5lf %.5lf", cx, cy);
	else printf("%lf", fval(cx, cy));
	return 0;
}
