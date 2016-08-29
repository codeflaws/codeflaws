#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
	double a, v, l, d, w;
	double t, lv, lw, v2;
	scanf("%lf%lf%lf%lf%lf", &a, &v, &l, &d, &w);

	lv = v * v / a / 2;
	lw = w * w / a / 2;
	if (w >= v){
		if (l < lv) t = sqrt(2 * l / a);
		else t = v / a + (l - lv) / v;
	}
	else{
		if (d < lw){
			t = sqrt(2 * d / a);
			v2 = a * t;
		}
		else{
			if (d < 2 * lv - lw){
				t = w / a + 2 * (sqrt(w * w - a * (lw - d)) - w) / a;
				v2 = w;
			}
			else{
				t = (2 * v - w) / a + (2 * lv - lw - d) / v;
				v2 = w;
			}
		}
		lv = (v * v - v2 * v2) / a / 2;
		d = l - d;
		if (d < lv){
			t += (sqrt(v2 * v2 + 2 * a * d) - v2) / a;
		}
		else{
			t += (v - v2) / a + (d - lv) / v;
		}
	}
	printf("%lf\n", t);
	return 0;
}