#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	long long a,b,c,d;
	double x1,x2;
	scanf("%lld %lld %lld\n",&a,&b,&c);
	if (a) {
		d=b*b-4*a*c;
		if (d>0) {
			x1=(-b-sqrt(d))/2/a;
			x2=(-b+sqrt(d))/2/a;
			if (a>0) printf("2\n%lf\n%lf\n",x1,x2);
			else printf("2\n%lf\n%lf\n",x2,x1);
		} else if (d==0) {
			printf("1\n%lf\n",-1.*b/2/a);
		} else printf("0\n");
	} else if (b) printf("1\n%lf\n",-1.*c/b);
	else if (c) printf("0\n");
	else printf("-1\n");
	return 0;
}
