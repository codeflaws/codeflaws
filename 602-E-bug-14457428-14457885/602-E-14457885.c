#include<stdio.h>
typedef unsigned u;
typedef long double ld;
typedef double d;
ld S[100002];
int main(int argc, char *argv[])
{
	u n,p,x=0,l,r,i,h;ld t,a,b,c;
	scanf("%u%u",&n,&p);
	for(S[0]=1.0;n--;x+=i)
	{
		scanf("%u",&i);
		t=0.0;
		r=100002;
		for(l=r;l--;)
		{
			t+=S[l];
			if(r-l==p)break;
		}
		while(r--)
		{
			t-=S[r];
			if(--l<100002)t+=S[l];
			h=r-i;
			S[r]=t-(h<100002?S[h]:0.0);
		}
	}
	a=0.0;b=0.0;c=(ld)p;
	for(i=-1;++i<100002;b+=S[i])if(i<x)a+=S[i];
	if(b<0.5)b=0.5;
	printf("%.16lf\n",1.0+(d)(a/b*(c-1.0)));
	return 0;
}
