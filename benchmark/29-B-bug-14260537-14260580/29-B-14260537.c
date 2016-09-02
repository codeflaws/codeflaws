#include <stdio.h>

int main(int argc, char *argv[]) {
	int l,d,v,g,r,dr;
	scanf("%d %d %d %d %d\n",&l,&d,&v,&g,&r);
	dr=d%((g+r)*v);
	if (dr<g*v) printf("%lf\n",l*1./v);
	else printf("%lf\n",(d+r*v)/(v*(g+r))*(g+r)+(l-d)%((g+r)*v)*1./v);
	return 0;
}
