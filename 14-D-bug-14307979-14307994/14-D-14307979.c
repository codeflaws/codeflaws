#include <stdio.h>

int x[201][201],a[200],b[200],n,distance,end,max,blown;

void go(int down,int up,int len) {
	int i;
	if (len>distance) {
		distance=len;
		end=down;
	}
	for (i=1;i<=n;i++)
		if (x[down][i]&&i!=up&&i!=blown)
			go(i,down,len+1);
}

int travel(int start,int fuse) {
	blown=fuse;
	end=start;
	distance=0;
	go(start,fuse,0);
	distance=0;
	go(end,fuse,0);
	return distance;
}

int main(int argc, char *argv[]) {
	int i;
	scanf("%d\n",&n);
	for (i=0;i<n-1;i++) {
		scanf("%d %d\n",&a[i],&b[i]);
		x[a[i]][b[i]]=x[b[i]][a[i]]=1;
	}
	for (i=0;i<n-1;i++) {
		int nibble=travel(a[i],b[i]);
		int snake=travel(b[i],a[i]);
		if (snake&&nibble&&snake+nibble>max) max=snake+nibble;
	}
	printf("%d\n",max);
	return 0;
}
