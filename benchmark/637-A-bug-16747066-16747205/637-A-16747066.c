#include<stdio.h>
#include<stdlib.h>

struct point {
	int o,x,y;
};

struct point a[1000005];

int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int i;
	for (i=1;i<=1000000;i++) {
		a[i].o=i;
	}
	for (i=1;i<=n;i++) {
		int input;
		scanf("%d",&input);
		(a[input].x)++;
		(a[input].y)=i;
	}
	int maxj=1;
	int maxn=a[1].x;
	for (i=2;i<=1000000;i++) {
		if (a[i].x>maxn) {
			maxn=a[i].x;
			maxj=i;
		}
	}
	int mini=1;
	int minm=100000000;
	for (i=2;i<=1000000;i++) {
		if (a[i].x==maxn && a[i].y<minm) {
			mini=i;
			minm=a[i].y;
		}
	}
	printf("%d\n",a[mini].o);
	return 0;
}
