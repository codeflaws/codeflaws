#include<stdio.h>
typedef unsigned u;
int main(int argc, char *argv[])
{
	u n,k,a,b,c,d,st,fi;
	scanf("%u%u",&n,&k);
	if(n==4||(n>4&&k<n+1)){printf("-1\n");return 0;}
	scanf("%u%u%u%u",&a,&b,&c,&d);
	for(st=1;st==a||st==b||st==c||st==d;++st);
	for(fi=n;fi==a||fi==b||fi==c||fi==d;--fi);
	printf("%u %u",a,c);
	for(k=st-1;++k<=fi;)if(k!=a&&k!=b&&k!=c&&k!=d)printf(" %u",k);
	printf(" %u %u\n",d,b);
	printf("%u %u",c,a);
	for(k=st-1;++k<=fi;)if(k!=a&&k!=b&&k!=c&&k!=d)printf(" %u",k);
	printf(" %u %u\n",b,d);
	return 0;
}
