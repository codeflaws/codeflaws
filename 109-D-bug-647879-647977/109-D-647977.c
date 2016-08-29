#include<stdio.h>
#include<stdlib.h>

int a[100000][2];
int b[100000],c[100000];
int r[200000][2];
int n;

int cmp(const void *a,const void *b) {
	return *(int *)a-*(int *)b;
}

int lucky(int n) {
	if (!n) return 1;
	else if (n%10!=4 && n%10!=7) return 0;
	else return lucky(n/10);
}

void swap(int i,int j) {
	int t;
	t=b[i],b[i]=b[j],b[j]=t;
	c[b[i]]=i,c[b[j]]=j;
}

int main(int argc, char *argv[]) {
	int i,j,cnt;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i][0]),a[i][1]=i;
	for(i=0;i<n-1;i++) if (a[i+1][0]<a[i][0]) break;
	if (i>=n-1) {
		puts("0");
		return 0;
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(i=0;i<n;i++) if (lucky(a[i][0])) break;
	if (i<n) {
		cnt=0;
		for(j=0;j<n;j++) b[j]=c[j]=j;
		for(j=0;j<n;j++) if (j!=i) {
			if (j!=c[a[i][1]]) {
				r[cnt][0]=c[a[i][1]],r[cnt][1]=j,cnt++;
				swap(c[a[i][1]],j);
			}
			if (j!=c[a[j][1]]) {
				r[cnt][0]=j,r[cnt][1]=c[a[j][1]],cnt++;
				swap(j,c[a[j][1]]);
			}
		}
		printf("%d\n",cnt);
		for(i=0;i<cnt;i++) printf("%d %d\n",r[i][0]+1,r[i][1]+1);
	} else puts("-1");
	return 0;
}