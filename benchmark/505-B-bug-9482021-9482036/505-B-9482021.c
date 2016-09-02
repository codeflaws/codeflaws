//write MAXM copies of union-find struct

#define MAXN 100
#define MAXM 100
int p[MAXM][MAXN];
int find(int c, int x) {
	return x == p[c][x] ? x : (p[c][x] = find(c, p[c][x]));
}

int main(int argc, char *argv[])
{
	// initialize
	int n, m;
	for(n = 0; n < MAXN; n++)
	for(m = 0; m < MAXM; m++)
		p[m][n] = n;
	// union 
	scanf("%d %d\n", &n, &m);
	int i, a, b, c;
	for(i = 0; i < m; i++){
		scanf("%d %d %d\n", &a, &b, &c);
		int pa = find(c, a);
		int pb = find(c, b);
		if(pa != pb) p[c][pa] = pb;
	}
	// queries
	int j, q, u, v;
	scanf("%d\n", &q);
	for(i = 0; i < q; i++){
		int ans = 0;
		scanf("%d %d\n", &u, &v);
		for(j = 0; j < m; j++)
			ans+=(find(j, u) == find(j, v));
		printf("%d\n", ans);
	}
	
	return 0;
}
