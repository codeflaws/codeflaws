#include<stdio.h>
#include<stdlib.h>
long long ans,a,b,mina=99999999999999999,minb=9999999999999999,maxa=-9999999999999,maxb=-999999999999999,i,n;
int main(int argc, char *argv[]){
	scanf("%lld",&n);
	for(i=1;i<=n;i++){
		scanf("%lld %lld",&a,&b);
		if(a>maxa) maxa=a;
		if(b>maxb) maxb=b;
		if(a<mina) mina=a;
		if(b<minb) minb=b;
	}
	if(maxa-mina > maxb-minb)
		ans = maxa-mina;
	else
		ans = maxb-minb;

	printf("%lld",ans*ans);
		
		return 0;
}
