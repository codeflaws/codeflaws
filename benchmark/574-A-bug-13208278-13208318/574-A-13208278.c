#include <stdio.h>

int f[1001];

int main(int argc, char *argv[]) {
	int n;
	scanf("%d\n",&n);
	int limak;
	scanf("%d",&limak);
	while (--n) {
		int a;
		scanf("%d",&a);
		f[a]++;
	}
	n=1000;
	int candy=0;
	while (n>=limak+candy) {
		if (f[n]+limak+candy>=n) break;
		candy+=f[n];
		f[n-1]+=f[n];
		n--;
	}
	if (f[n]+limak+candy>n) candy+=(n-limak-candy+1)/2+1;
	else candy+=f[n];
	printf("%d\n",candy);
	return 0;
}
