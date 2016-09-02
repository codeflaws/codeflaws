int main(int argc, char *argv[]){
	long long x,n,a=0,b=1e10,c,d;
	scanf("%lld",&n);
	for(n=n;n>0;--n){
		scanf("%lld",&x);
		if(x==a)++c;
		if(x>a){
			a=x;
			c=1;
		}
		if(x==b)++d;
		if(x<b){
			b=x;
			d=1;
		}
	}
	printf("%lld %lld",a-b,c*d);
	return 0;
}
