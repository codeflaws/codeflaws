#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define PI 3.141592653589793
#define max(a,b) (a < b) ? (b) : (a)
#define min(a,b) (a > b) ? (b) : (a)
#define FOR(i,a,b) for(i = a ; i <= b ; i++)
#define ROF(i,a,b) for(i = a ; i >= b ; i--)
#define RAD(x) ((x)*PI)/180
#define y1 y_1
#define endl printf("\n")
#define MAX 105

int n, i, j, yer, ans1, ans2, m[MAX][MAX], h[MAX][MAX], t[MAX], cvp[MAX], a[MAX], b[MAX], c[MAX];

int dfs (int);

int main(int argc, char *argv[]) {
	scanf("%d",&n);
	FOR(i, 1, n){
		scanf("%d %d %d",&a[i] ,&b[i] ,&c[i]);
		m[a[i]][b[i]] = c[i];
		h[a[i]][b[i]] = c[i];
		h[b[i]][a[i]] = c[i];
	}
	dfs(1);
	FOR(i, 1, yer)
		printf("%d ",cvp[i]);
	endl;
	FOR(i, 1, n){
		if(cvp[a[i]] == cvp[b[i]] - 1 || (cvp[a[i]] == n && cvp[b[i]] == 1))
			ans1 += c[i];
		else if(cvp[a[i]] - 1 == cvp[b[i]] || (cvp[a[i]] == 1 && cvp[b[i]] == n))
			ans2 += c[i];
	}
	printf("%d\n",min(ans1, ans2));
	return 0;
}

int dfs (int x){
	int i;
	if(t[x])
		return 0;
	t[x] = 1;
	cvp[x] = ++yer;
	FOR(i, 1, n)
		if(h[x][i])
			dfs(i);
}
