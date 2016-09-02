#include <stdio.h>

#define MaXN 300100

int n;
int a[MaXN];
int best;
int ansCnt, ans[MaXN];
int L[MaXN], R[MaXN];

int main(int argc, char *argv[]){
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	L[0] = 0;
	for (i = 1; i < n; i++)
		for (L[i] = i; L[i] > 0 && a[L[i]-1] % a[i] == 0; L[i] = L[L[i]-1]);

	R[n-1] = n-1;
	for (i = n-2; i >= 0; i--)
		for (R[i] = i; R[i] < n-1 && a[R[i]+1] % a[i] == 0; R[i] = R[R[i]+1]);

	for (i = 0; i < n; i++){
		if (R[i] - L[i] > best){
			best = R[i] - L[i];
			ansCnt = 0;
		}

		if (R[i] - L[i] == best && (!ansCnt || ans[ansCnt-1] != L[i]))
			ans[ansCnt++] = L[i];
	}

	printf("%d %d\n", ansCnt, best);
	for (i = 0; i < ansCnt; i++)
		printf("%d ", ans[i]+1);
	printf("\n");

	return 0;
}
