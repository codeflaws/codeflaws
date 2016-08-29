#include<stdio.h>
int main(int argc, char *argv[]){
	long long int rem,i,j,k,l,n,m,r,a[64],ans;
	a[0]=1;
	for(i=1;i<=64;i++)
		a[i]=a[i-1]*2;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld%lld",&l,&r);
		rem = l;
		m=1;
		while(l <= r){
			ans = l;
			if(rem%2==0)
				l = l + a[m-1];
			m++;
			rem = rem/2;
			printf("%lld %lld\n",l,r);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
