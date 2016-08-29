#include<stdio.h>
long long a,b;
long long val(int x){
	return a+b*(x-1);
}
int possible(long long s,long long e,long long t,long long m){
	if(val(e)<=t&&(((val(e)+val(s))*(e-s+1))>>1)<=t*m){
		return 1;
	}
	else{
		return 0;
	}
}
int main(int argc, char *argv[]){
	long long n,l,t,m,i,j,s,e,mid;
	scanf("%lld %lld %lld",&a,&b,&n);
	while(n--){
		scanf("%lld %lld %lld",&l,&t,&m);
		s=l;
		e=((t-a)/b)-1;
		if(e<s){
			printf("-1\n");
			continue;
		}
		while(s<e){
			mid=((s+e)>>1)+1;
			if(possible(l,mid,t,m)){
				s=mid;
			}
			else{
				e=mid-1;
			}
		}
		printf("%lld\n",e);
	}
	return 0;
}
