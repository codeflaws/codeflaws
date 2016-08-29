#include<stdio.h>
int main(int argc, char *argv[]) {
	int i,j,k,l,n,m,a[1000],b[10000],min1=1000000000,max1=0,min2=100000000,max2=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<m;i++) {
		if(b[i] > max2)
			max2 = b[i];
		if(b[i] < min2)
			min2 = b[i];
	}
	for(i=0;i<n;i++) {
		if(a[i] > max1)
			max1 = a[i];
		if(a[i] < min1)
			min1 = a[i];
	}
	for(i=max1;i<min2;i++) 
		if(2*min1<=i) {
			printf("%d\n",i);
			return 0;
		}
	printf("-1\n");
	return 0;
}
