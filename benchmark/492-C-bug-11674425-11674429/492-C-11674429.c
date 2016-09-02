#include<stdio.h>
int merge(long long int* a,long long int* b,long long int* c,long long int* d,long long int s,long long int e){
	if(s>=e)
		return 0;
	merge(a,b,c,d,s,(s+e)/2);
	merge(a,b,c,d,((s+e)/2)+1,e);
	int i = s,j=((s+e)/2)+1,n = s;
	while(i <= (s+e)/2 || j <= e)
		if(a[i] <= a[j] && i <= (s+e)/2){
			b[n] = a[i];
			d[n] = c[i];
			i++;
			n++;
		}
		else
			if(a[i] >= a[j] && j <= e){
				b[n] = a[j];
				d[n] = c[j];
				j++;
				n++;
			}
			else
				if(i > (s+e)/2)
					while(j <= e){
						b[n] = a[j];
						d[n] = c[j];
						j++;
						n++;
					}
				else
					while(i <= (s+e)/2){
						b[n] = a[i];
						d[n] = c[i];
						i++;
						n++;
					}
	for(i=s;i<=e;i++) {
		a[i] = b[i];
		c[i] = d[i];
	}
	return 0;
}
int main(int argc, char *argv[]){
	long long int i,j,k,l,n,m,r,avg,a[200005],b[200005],c[200005],d[200005],o;
	scanf("%lld%lld%lld",&n,&r,&avg);
	avg = n*avg;
	for(i=0;i<n;i++) {
		scanf("%lld%lld",&a[i],&b[i]);
		avg -= a[i];
	}
	merge(b,c,a,d,0,n-1);
	long long int ans=0;
	for(i=0;i<n,avg>0;i++){
		if(a[i]<r)
			if(r-a[i] < avg) {
				avg -= (r-a[i]);
				ans += b[i]*(r-a[i]);
			}
			else {
				ans += b[i]*avg;
				avg = 0;
			}	
	}
	printf("%lld\n",ans);
	return 0;
}
