#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int pos;
	int lv;
	int rv;
}UB;

char P[50001];
UB B[50001];
int N;

void sift_up(int pos){
	int t, tp, p = (pos - 1) / 2;
	t = B[pos].lv - B[pos].rv;
	tp = B[p].lv - B[p].rv;
	if (t < tp){
		UB tb = B[pos];
		B[pos] = B[p];
		B[p] = tb;
		sift_up(p);
	}
}

void sift_down(int pos){
	int t, tp;
	UB tb;
	int p, l = pos * 2 + 1, r = pos * 2 + 2;
	if (pos >= N) return;
	if (l >= N && r >= N) return;
	if (r >= N) p = l;
	else{
		t = B[l].lv - B[l].rv;
		tp = B[r].lv - B[r].rv;
		if (t <= tp) p = l;
		else p = r;
	}
	t = B[p].lv - B[p].rv;
	tp = B[pos].lv - B[pos].rv;
	if (t >= tp) return;
	tb = B[pos];
	B[pos] = B[p];
	B[p] = tb;
	sift_down(p);
}

int main(int argc, char *argv[])
{
	int i, j, c;
	long long sum = 0;

	gets(P);
	N = 0;
	for (i = 0, c = 0; P[i]; i++){
		if (P[i] == '(') c++;
		else if (P[i] == ')') c--;
		else{
			B[N].pos = i;
			scanf("%d%d", &(B[N].lv), &(B[N].rv));
			sum += B[N].rv;
			N++;
			sift_up(N - 1);
			P[i] = ')';
			c--;
		}
		if (c < 0){
			if (N > 0){
				P[B[0].pos] = '(';
				sum -= B[0].rv;
				sum += B[0].lv;
				c += 2;
				N--;
				if (N > 0){
					B[0] = B[N];
					sift_down(0);
				}
			}
		}
		if (c < 0){
			printf("-1\n");
			return 0;
		}
	}
	if (c != 0) printf("-1\n");
	else printf("%I64d\n%s\n", sum, P);
	return 0;
}