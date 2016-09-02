#include <stdio.h>

typedef long long ll;
ll ca[10001];
int main(int argc, char *argv[]){
	ll m,q,mq,n,a,o=0,qo,fo,i;
	for(i=0;i<10001;i++)ca[i]=0;
	scanf("%lld",&m);
	m--;scanf("%lld",&mq);
	while(m--){
		scanf("%lld",&q);
		if(q<mq)mq=q;
	}
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&a);
		ca[a]++;
	}

	qo=mq;fo=2;
	for(i=10000;i>0;i--){
		while(ca[i]){
			if(qo>0){
				o+=i;ca[i]--;qo--;}
			else if(fo>0){
				    ;ca[i]--;fo--;}
			else{
				qo=mq;fo=2;
			}
		}
	}

	printf("%lld\n",o);

}


