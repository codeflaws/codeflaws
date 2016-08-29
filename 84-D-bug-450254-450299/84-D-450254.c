#include<stdio.h>
#include<stdlib.h>

int a[100000],b[100000];
int n;

int cmp(const void *a,const void *b) {
	return *(int *)a-*(int *)b;
}

int main(int argc, char *argv[]) {
	int i,j,c,d,e,f=1,t;
	long long k;
	scanf("%d %I64d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&a[i]),b[i]=a[i];
	qsort(b,n,sizeof(b[0]),cmp);
	for(i=j=0;i<n;i++) {
		if (k<(long long)(n-i)*(b[i]-j)) break;
		k-=(long long)(n-i)*(b[i]-j);
		j=b[i];
	}
	if (i>=n) {
		puts("-1");
		return 0;
	}
	c=k%(n-i);
	for(d=e=0;e<c;d++) if (a[d]>j) e++;
	for(t=d;t<n;t++) if (a[t]>j+k/(n-i)) {
		if (f) f=0; else putchar(' ');
		printf("%d",t+1);
	}
	for(t=0;t<d;t++) if (a[t]>j+k/(n-i)+1) {
		if (f) f=0; else putchar(' ');
		printf("%d",t+1);
	}
	puts("");
	return 0;
}