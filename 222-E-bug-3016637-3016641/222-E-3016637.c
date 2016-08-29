#include <stdio.h>
#include <ctype.h>

#define SIZE 55
#define MOD 1000000007

typedef struct {
	unsigned long long int m[SIZE][SIZE];
} mat;

int m;
mat valid;

mat multiply(mat A, mat B){
	int i, j, k;
	mat C;
	for (i = 0; i < m; i++)
		for (j = 0; C.m[i][j] = 0, j < m; j++)
			for (k = 0; k < m; k++)
				C.m[i][j] = (C.m[i][j] + A.m[i][k] * B.m[k][j]) % MOD;
	return C;
}

mat matexp(int p){
	int i, j, k;
	mat ans;

	if (p == 0){
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
				ans.m[i][j] = i == j;
	} else if (p == 1){
		return valid;
	} else if (p % 2 == 0){
		ans = matexp(p/2);
		ans = multiply(ans, ans);
	} else {
		ans = matexp(p/2);
		ans = multiply(multiply(ans, ans), valid);
	}

	return ans;
}

int main(int argc, char *argv[]){
	int i, j, a, b, k;
	unsigned long long int n;
	char str[10];
	mat res;
	unsigned long long int answer = 0;

	scanf("%llu %d %d", &n, &m, &k);

	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			valid.m[i][j] = 1;

	for (i = 0; i < k; i++){
		scanf("%s", str);
		a = str[0]; b = str[1];
		a -= isupper(a) ? 'A' - 26 : 'a';
		b -= isupper(b) ? 'A' - 26 : 'a';
		valid.m[a][b] = 0;
	}

	res = matexp(n-1);

	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			answer = (answer + res.m[i][j]) % MOD;

	printf("%llu\n", answer);

	return 0;
}
