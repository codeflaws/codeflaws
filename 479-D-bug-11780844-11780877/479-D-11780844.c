#include<stdio.h>
long long int a[100005];
long long int binary(long long int x,long long int i,long long int j) {
	while(i<j)
		if(a[(i+j+1)/2] > x)
			j = (i+1+j)/2 - 1;
		else if(a[(i+j+1)/2] < x)
			i = (i+j+1)/2 + 1;
		else
			return (i+j+1)/2;
	if(a[i]==x)
		return i;
	return -1;
}
int main(int argc, char *argv[]) {
	long long int i,j,k,l,n,m,x,y,flagx=0,flagy=0;
	scanf("%lld%lld%lld%lld",&n,&l,&x,&y);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<n;i++)
		if(binary(a[i]+x,i,n-1) != -1 || binary(a[i]-x,0,n-1) != -1)
			flagx = 1;
	for(i=0;i<n;i++)
		if(binary(a[i]+y,i,n-1) != -1 || binary(a[i]-y,0,n-1) != -1)
			flagy = 1;
	if(flagx==0 && flagy==0) {
		for(i=0;i<n;i++) 
			if(binary(a[i]+x+y,i,n-1) != -1) {
				printf("1\n%lld\n",a[i]+x);
				return 0;
			}
			else if(a[i]-x>=0 && a[i]-x-y >=0 && binary(a[i]-x-y,0,n-1) != -1) {
				printf("1\n%lld\n",a[i]-x);
				return 0;
			}
			else if(a[i]-x>=0 && binary(a[i]-x+y,0,n-1) != -1) {
				printf("1\n%lld\n",a[i]-x);
				return 0;
			}
			else if(binary(a[i]+x-y,0,n-1) != -1) {
				printf("1\n%lld\n",a[i]+x);
				return 0;
			}
		printf("2\n%lld %lld\n",x,y);
	}
	else
		if(flagx == 1 && flagy == 1)
			printf("0\n");
		else
			if(flagx == 1)
				printf("1\n%lld\n",y);
			else
				printf("1\n%lld\n",x);
	return 0;
}
