#include <stdio.h>

#define MAX(a,b) (a)>(b)?(a):(b)
#define REP(a,b) for((a)=0;(a)<(b);(a)++)
#define MAXN 3000

int V[MAXN][3];
int DIN[MAXN][2];
int N;

int calc(int n, int k) {
	if (n >= N) return 0;
	if (k==0) return MAX(V[n][0] + calc(n+1, 1), V[n][1] + calc(n+1, 0));
	else return MAX(V[n][1] + calc(n+1, 1), V[n][2] + calc(n+1, 0));
}

int dinamica() {
	int i;
	DIN[N-1][0] = V[N-1][0];
	DIN[N-1][1] = V[N-1][1];
	for (i = N-2; i>0; i--) {
		DIN[i][0] = MAX(V[i][0]+DIN[i+1][1], V[i][1]+DIN[i+1][0]);
		DIN[i][1] = MAX(V[i][1]+DIN[i+1][1], V[i][2]+DIN[i+1][0]);
	}
	return MAX(DIN[1][0]+V[0][1], DIN[1][1]+V[0][0]);
}

void read() {
	int i;
	scanf("%d", &N);
	REP(i,N) scanf("%d", &V[i][0]);
	REP(i,N) scanf("%d", &V[i][1]);
	REP(i,N) scanf("%d", &V[i][2]);
}

int main(int argc, char *argv[]) {
	int result;
	read();
	//result = MAX(calc(0, 0), calc(0, 1));
	result = dinamica();
	printf("%d\n", result);
	return 0;
}