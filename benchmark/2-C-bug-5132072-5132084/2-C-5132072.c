#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define fequ(a, b) (fabs(a - b) < 0.000000001)

typedef struct{
	int x;
	int y;
	int r;
} ST;

int main(int argc, char *argv[])
{
	ST s[3];
	int i, j, t1, t2, a0, b0, k0, a1, b1, k1;
	double r0, r1, x, y, x2, y2, f0, f1, f2;
	for(i = 0; i < 3; i++){
		scanf("%d%d%d", &s[i].x, &s[i].y, &s[i].r);
	}
	t1 = s[0].r * s[0].r;
	t2 = s[1].r * s[1].r;
	k0 = t1 - t2;
	a0 = s[1].x * t1 - s[0].x * t2;
	b0 = s[1].y * t1 - s[0].y * t2;
	t1 = s[0].x - s[1].x;
	t2 = s[0].y - s[1].y;
	r0 = sqrt((double)(t1 * t1 + t2 * t2)) * s[0].r * s[1].r;

	t1 = s[0].r * s[0].r;
	t2 = s[2].r * s[2].r;
	k1 = t1 - t2;
	a1 = s[2].x * t1 - s[0].x * t2;
	b1 = s[2].y * t1 - s[0].y * t2;
	t1 = s[0].x - s[2].x;
	t2 = s[0].y - s[2].y;
	r1 = sqrt((double)(t1 * t1 + t2 * t2)) * s[0].r * s[2].r;

	if(0 == k0 && 0 == k1){
		f0 = -(double)a0 / b0;
		f1 = -(double)a1 / b1;
		r0 = (double)(s[0].y + s[1].y) / 2 - f0 * (double)(s[0].x + s[1].x) / 2;
		r1 = (double)(s[0].y + s[2].y) / 2 - f1 * (double)(s[0].x + s[2].x) / 2;
		if(0 == b0 && 0 == b1){
			return 0;
		}else if(0 == b0){
			x = (double)(s[0].x + s[1].x) / 2;
			y = f1 * x + r1;
		}else if(0 == b1){
			x = (double)(s[0].x + s[2].x) / 2;
			y = f0 * x + r0;
		}else if(fequ(f0, f1)){
			return 0;
		}else{
			x = (r1 - r0) / (f0 - f1);
			y = f0 * x + r0;
		}
	}else if(0 == k0){
		if(0 == b0){
			x = (double)(s[0].x + s[1].x) / 2;
			f0 = r1/k1*r1/k1 - (x-(double)a1/k1)*(x-(double)a1/k1);
			if(f0 < 0) return 0;
			y = (double)b1/k1 + sqrt(f0);
			y2 = (double)b1/k1 - sqrt(f0);
			f0 = (s[0].x - x) * (s[0].x - x) + (s[0].y - y) * (s[0].y - y);
			f1 = (s[0].x - x) * (s[0].x - x) + (s[0].y - y2) * (s[0].y - y2);
			if(f1 < f0) y = y2;
		}else{
			f0 = -(double)a0 / b0;
			r0 = (double)(s[0].y + s[1].y) / 2 - f0 * (double)(s[0].x + s[1].x) / 2;
			f1 = f0*(r0 - (double)b1/k1) - (double)a1/k1;
			f2 = r0 - (double)b1/k1;
			x = 4*f1*f1 - 4*(f0*f0+1)*(f2*f2 - r1/k1*r1/k1 + (double)a1/k1*(double)a1/k1);
			if(x < 0) return 0;
			y = -2*(f0*f2 - (double)a1/k1) / (2*(f0*f0+1));
			y2 = sqrt(x) / (2*(f0*f0+1));
			x = y + y2;
			x2 = y - y2;
			y = f0 * x + r0;
			y2 = f0 * x2 + r0;
			f0 = (s[0].x - x) * (s[0].x - x) + (s[0].y - y) * (s[0].y - y);
			f1 = (s[0].x - x2) * (s[0].x - x2) + (s[0].y - y2) * (s[0].y - y2);
			if(f1 < f0){
				x = x2;
				y = y2;
			}
		}
	}else if(0 == k1){
		if(0 == b1){
			x = (double)(s[0].x + s[1].x) / 2;
			f0 = r0/k0*r0/k0 - (x-(double)a0/k0)*(x-(double)a0/k0);
			if(f0 < 0) return 0;
			y = (double)b0/k0 + sqrt(f0);
			y2 = (double)b0/k0 - sqrt(f0);
			f0 = (s[0].x - x) * (s[0].x - x) + (s[0].y - y) * (s[0].y - y);
			f1 = (s[0].x - x) * (s[0].x - x) + (s[0].y - y2) * (s[0].y - y2);
			if(f1 < f0) y = y2;
		}else{
			f0 = -(double)a1 / b1;
			r1 = (double)(s[0].y + s[2].y) / 2 - f0 * (double)(s[0].x + s[2].x) / 2;
			f1 = f0*(r1 - (double)b0/k0) - (double)a0/k0;
			f2 = r1 - (double)b0/k0;
			x = 4*f1*f1 - 4*(f0*f0+1)*(f2*f2 - r0/k0*r0/k0 + (double)a0/k0*(double)a0/k0);
			if(x < 0) return 0;
			y = -2*(f0*f2 - (double)a0/k0) / (2*(f0*f0+1));
			y2 = sqrt(x) / (2*(f0*f0+1));
			x = y + y2;
			x2 = y - y2;
			y = f0 * x + r1;
			y2 = f0 * x2 + r1;
			f0 = (s[0].x - x) * (s[0].x - x) + (s[0].y - y) * (s[0].y - y);
			f1 = (s[0].x - x2) * (s[0].x - x2) + (s[0].y - y2) * (s[0].y - y2);
			if(f1 < f0){
				x = x2;
				y = y2;
			}
		}
	}else{
		x = (double)a0/k0;
		y = (double)a1/k1;
		x2 = (double)b0/k0;
		y2 = (double)b1/k1;
		f0 = r1/k1*r1/k1 - r0/k0*r0/k0 + (y-x)*(y-x) + (y2-x2)*(y2-x2);
		f1 = 2 * (y - x) * r1 / k1;
		f2 = 2 * (y2 - x2) * r1 / k1;
		x = 4*f1*f1*f0*f0 - 4*(f1*f1+f2*f2)*(f0*f0-f2*f2);
		if(x < 0) return 0;
		x = sqrt(x) / 2 / (f1*f1+f2*f2);
		y = -2 * f1*f0 / 2 / (f1*f1+f2*f2);
		f0 = y + x;
		f1 = y - x;
		x = (r1 * f0 + a1) / k1;
		y = (r1 * sqrt(1 - f0*f0) + b1) / k1;
		if(!fequ((x-(double)a0/k0)*(x-(double)a0/k0) + (y-(double)b0/k0)*(y-(double)b0/k0), r0/k0*r0/k0))
			y = (-r1 * sqrt(1 - f0*f0) + b1) / k1;
		x2 = (r1 * f1 + a1) / k1;
		y2 = (r1 * sqrt(1 - f1*f1) + b1) / k1;
		if(!fequ((x2-(double)a0/k0)*(x2-(double)a0/k0) + (y2-(double)b0/k0)*(y2-(double)b0/k0), r0/k0*r0/k0))
			y2 = (-r1 * sqrt(1 - f1*f1) + b1) / k1;
		f0 = (s[0].x - x) * (s[0].x - x) + (s[0].y - y) * (s[0].y - y);
		f1 = (s[0].x - x2) * (s[0].x - x2) + (s[0].y - y2) * (s[0].y - y2);
		if(f1 < f0){
			x = x2;
			y = y2;
		}
	}

	printf("%.5f %.5f\n", x, y);

	return 0;
}
