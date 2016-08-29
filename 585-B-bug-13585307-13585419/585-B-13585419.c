#include <stdio.h>
#include <string.h>
char m[3][105];
int n, k;
int dfs(int idx, int r) {
	if (idx >= n) return 1;
	if ('.' != m[r][idx] || '.' != m[r][idx+1]) return 0;
	if ('.' == m[1][idx+1] && '.' == m[1][idx+3] && '.' == m[1][idx+4])
		return dfs(idx + 3, 1);
	if (1 != r) {
		if ('.' == m[r][idx+1] && '.' == m[r][idx+3])
			return dfs(idx + 3, r);
	} else {
		if ('.' == m[0][idx+1] && '.' == m[0][idx+3] && dfs(idx + 3, 0))
			return 1;
		if ('.' == m[2][idx+1] && '.' == m[2][idx+3] && dfs(idx + 3, 2))
			return 1;
	}
	return 0;
}
int main(int argc, char *argv[]) {
	int t, r;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &k);
		memset(m, '.', sizeof(m));
		scanf("%s%s%s", m[0], m[1], m[2]);
		m[0][n] = m[1][n] = m[2][n] = '.';
		if ('s' == m[0][0]) r = 0;
		else if ('s' == m[1][0]) r = 1;
		else r = 2;
		m[r][0] = '.';
		printf("%s\n", dfs(0, r) ? "YES" : "NO");
	}
	return 0;
}