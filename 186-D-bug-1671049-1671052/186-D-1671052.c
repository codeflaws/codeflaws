#include <float.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int S, a, b, c;
	double t;
	scanf("%d %d %d %d", &S, &a, &b, &c);
	if(t=a+b+c, t==0) printf("%d %d %d\n", 0, 0, 0);
	else printf("%.*f %.*f %.*f\n",
		DBL_DIG, a*S/t,
		DBL_DIG, b*S/t, 
		DBL_DIG, c*S/t);
	exit(0);
return 0;
}
