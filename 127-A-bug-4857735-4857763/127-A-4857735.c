#include <stdio.h>
#include <math.h>

double dist(double x, double x2, double y, double y2) {
	return sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
}

int main(int argc, char *argv[]) {
	int n,k,i;
	double sumlen=0;
	double Ax,Ay,Apx=0,Apy=0;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;++i) {
		scanf("%lf %lf",&Ax,&Ay);
		if(i>0) sumlen+=dist(Ax,Apx,Ay,Apy);
		Apx=Ax;Apy=Ay;
	}
	printf("%.9lf",sumlen/5.00);
	return 0;
}