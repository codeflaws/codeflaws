#include<stdio.h>
#include<stdlib.h>

long long ans,a,b,mina=1231231,minb=1231231,maxa=-12312123,maxb=-1312123,i,n;
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
