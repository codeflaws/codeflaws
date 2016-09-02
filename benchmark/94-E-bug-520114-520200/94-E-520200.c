#include<stdio.h>

int a[32];
int p[32][3];
int r[32][3];
int ans;
int n;

void dfs(int t) {
	int i,j;
	if (a[t]==n) {
		if (t<ans) {
			ans=t;
			for(i=0;i<=ans;i++) for(j=0;j<3;j++) r[i][j]=p[i][j];
		}
		return ;
	}
	if (t>=ans) return ;
	for(i=t;i>=0;i--) for(j=1;j<=8;j*=2) {
		if (a[i]+a[t]*j<=n) {
			a[t+1]=a[i]+a[t]*j;
			p[t+1][0]=i,p[t+1][1]=t,p[t+1][2]=j;
			dfs(t+1);
		}
		if (j!=1 && a[i]*j+a[t]<=n) {
			a[t+1]=a[t]+a[i]*j;
			p[t+1][0]=t,p[t+1][1]=i,p[t+1][2]=j;
			dfs(t+1);
		}
	}
	for(j=2;j<=8 && a[t]*j<=n;j*=2) {
		a[t+1]=a[t]*j;
		p[t+1][0]=-1,p[t+1][1]=t,p[t+1][2]=j;
		dfs(t+1);
	}
}

int main(int argc, char *argv[]) {
	int i;
	scanf("%d",&n);
	for(ans=i=0;i<8;i++) if (n&(1<<i)) ans++;
	for(i=1;i<=n;i*=8) ans++;
	a[0]=1;
	dfs(0);
	printf("%d\n",ans);
	for(i=1;i<=ans;i++) {
		if (r[i][0]==-1) {
			printf("lea e%cx, [%d*e%cx]\n",'a'+i,r[i][2],'a'+r[i][1]);
		} else if (r[i][2]==1) {
			printf("lea e%cx, [e%cx + e%cx]\n",'a'+i,'a'+r[i][0],'a'+r[i][1]);
		} else {
			printf("lea e%cx, [e%cx + %d*e%cx]\n",'a'+i,'a'+r[i][0],r[i][2],'a'+r[i][1]);
		}
	}
	return 0;
}