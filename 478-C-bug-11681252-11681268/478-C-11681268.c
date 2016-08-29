#include<stdio.h>
int main(int argc, char *argv[]) {
	long long int i,j,k,l,n,m,ans = 0,a[3];
	scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
	for(i=2;i>0;i--)
		for(j=0;j<i;j++)
			if(a[j] > a[j+1]) {
				k = a[j];
				a[j] = a[j+1];
				a[j+1] = k;
			}
	if(a[2] > a[1])
		if(2*a[0] >= a[2]-a[1]) {
			ans += (a[2]-a[1])/2;
			a[0] -= (a[2]-a[1])/2;
			a[2] -= 2*((a[2]-a[1])/2);
		}
		else {
			ans += a[0];
			a[2] -= 2*a[0];
			a[0] = 0;
		}
	if(a[0] > 0) {
		ans += a[0];
		a[1] -= a[0];
		a[2] -= a[0];
		a[0] = 0;
	}
	if(2*a[1] <= a[2])
		printf("%lld\n",ans+a[1]);
	else
		printf("%lld\n",ans+(a[1]+a[2])/3);
	return 0;
}
