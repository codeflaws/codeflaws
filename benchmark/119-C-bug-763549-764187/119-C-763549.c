#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *a,const void *b) {
	long long a1=*(long long *)a,b1=*(long long *)b;
	if (a1<b1) return -1; else if (a1>b1) return 1; else return 0;
}

long long a[64][4];
int n,m,p;
long long dp[64][64][128];
int pre[64][64][64];
long long r[54][2];

int main(int argc, char *argv[]) {
	int i,j,k,l;
	scanf("%d %d %d",&n,&m,&p);
	for(i=0;i<m;i++) scanf("%lld %lld %lld",&a[i][1],&a[i][2],&a[i][0]),a[i][3]=i;
	qsort(a,m,sizeof(a[0]),cmp);
	memset(dp,0xff,sizeof(dp));
	memset(pre,0xff,sizeof(pre));
	for(i=0;i<m;i++) for(j=0;j<=a[i][2]-a[i][1];j++) dp[0][i][j]=a[i][1]+j;
	for(i=1;i<n;i++) for(j=i;j<m;j++) for(k=0;k<=a[j][2]-a[j][1];k++) {
		for(l=0;l<j;l++) if (a[j][0]>a[l][0]) {
			if (a[j][1]+k>p && a[j][1]+k-p>=a[l][1] && a[j][1]+k-p<=a[l][2]) {
				long long t=dp[i-1][l][a[j][1]+k-p-a[l][1]];
				if (t>=0) {
					t+=a[j][1]+k;
					if (t>dp[i][j][k]) dp[i][j][k]=t,pre[i][j][k]=l<<8|(a[j][1]+k-p-a[l][1]);
				}
			}
			if ((a[j][1]+k)%p==0 && (a[j][1]+k)/p>=a[l][1] && (a[j][1]+k)/p<=a[l][2]) {
				long long t=dp[i-1][l][(a[j][1]+k)/p-a[l][1]];
				if (t>=0) {
					t+=a[j][1]+k;
					if (t>dp[i][j][k]) dp[i][j][k]=t,pre[i][j][k]=l<<8|((a[j][1]+k)/p-a[l][1]);
				}
			}
		}
	}
	k=l=0;
	for(i=0;i<m;i++) for(j=0;j<=a[i][2]-a[i][1];j++) if (dp[n-1][i][j]>dp[n-1][k][l]) k=i,l=j;
	if (dp[n-1][k][l]<0) {
		puts("NO");
		return 0;
	}
	puts("YES");
	for(i=n-1;i>=0;i--) {
		r[i][0]=a[k][3]+1;
		r[i][1]=a[k][1]+l;
		j=pre[i][k][l];
		k=j>>8;
		l=j&255;
	}
	for(i=0;i<n;i++) printf("%lld %lld\n",r[i][0],r[i][1]);
	return 0;
}
