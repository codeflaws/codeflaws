#include<stdio.h>
#define eps (d)(1e-11)
typedef double d;
typedef unsigned u;
d A,B,C,D,r,x;
u BI;
d mut(d n){return n<0.0?-n:n;}
d F(d n)
{
	d W,X,Y,Z;
	W=A+((BI&(1<<0))?(d)(1.0):(d)(-1.0))*n;
	X=B+((BI&(1<<1))?(d)(1.0):(d)(-1.0))*n;
	Y=C+((BI&(1<<2))?(d)(1.0):(d)(-1.0))*n;
	Z=D+((BI&(1<<3))?(d)(1.0):(d)(-1.0))*n;
	return mut(W*Z-X*Y);
}
int main(int argc, char *argv[])
{
	scanf("%lf%lf%lf%lf",&A,&B,&C,&D);
	r=mut(A);u i;
	if(r<mut(B))r=mut(B);
	if(r<mut(C))r=mut(C);
	if(r<mut(D))r=mut(D);
	d le,ri,nle,nri,di;
	for(BI=-1;++BI<16;)
	{
		le=-1e9;ri=1e9;
		for(i=1000;--i;)
		{
			di=(ri-le)/(d)(3.0);
			nle=le+di;
			nri=ri-di;
			if(nle-le<eps||ri-nri<eps)break;
			if(F(nle)<F(nri))ri=nri;
			else le=nle;
		}
		if((F(nle)<1e-2*nle||F(nle)<1e-6)&&r>mut(nle))r=mut(nle);
	}
	printf("%.10lf\n",r);
	return 0;
}
