#include<stdio.h>
#include<stdlib.h>

int a[100010][2];
int b[100010];
int n,v;

int cmp(const void *aa,const void *bb) {
	int *a=(int *)aa,*b=(int *)bb;
	if (a[0]<b[0]) return -1; else if (a[0]>b[0]) return 1;
	else if (a[1]>b[1]) return -1; else if (a[1]<b[1]) return 1;
	return 0;
}

int cal(int a[][2],int n) {
	int l,r,i,ret=0;
	b[ret++]=a[0][1];
	for(i=1;i<n;i++) {
		for(l=0,r=ret;l<r;)
			if (b[(l+r)/2]>=a[i][1]) l=(l+r)/2+1; else r=(l+r)/2;
		if (l==0) continue;
		b[l]=a[i][1];
		if (l==ret) ret++;
	}
	return ret;
}

int main(int argc, char *argv[]) {
	int i,x,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d %d",&a[i][0],&a[i][1]);
	scanf("%d",&v);
	for(i=1;i<=n;i++) {
		x=a[i][0],t=a[i][1];
		a[i][0]=x+v*t;
		a[i][1]=x-v*t;
	}
	qsort(a+1,n,sizeof(a[0]),cmp);
	a[0][0]=a[0][1]=0;
	t=cal(a,n+1);
	a[0][1]=2000000000;
	printf("%d %d\n",t-1,cal(a,n+1)-1);
	return 0;
}