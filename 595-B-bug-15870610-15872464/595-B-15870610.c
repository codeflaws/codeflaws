#include<stdio.h>
int main(int argc, char *argv[]) {
	
	int n,k,i;
	scanf("%d%d",&n,&k);
	int l=n/k;
	int b[l];
	long long a[l],m=1000000007,low=1,high=0,sum=1;
	for(i=1;i<k;i++) {
	
		low*=10;
		high=high*10+9;
	}
	for(i=0;i<l;i++) 
		scanf("%lld",&a[i]);
	for(i=0;i<l;i++)
		scanf("%d",&b[i]);
	for(i=0;i<l;i++) {
		
		long long q=(high*10+9)/a[i] +1,j,l,h;
		l=b[i]*low;
		h=l+high;
		q-=(h/a[i]-l/a[i]);
		if(l%a[i]==0)
			q--;
		if(a[i]==b[i] && k==1)
			q--;
		sum=(sum*(q%m))%m;
	}
	printf("%lld",sum);
	return 0;
}
