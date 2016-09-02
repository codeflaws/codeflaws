#include<stdio.h>

int main(int argc, char *argv[]) {
	int n, t;
	scanf("%d %d", &n, &t);
	char s[n];
	scanf("%s",s);
	int j = 0, k = 0;
	while(t--) {
		int i = 0;
		while(i < n-1) {
			if(s[i] == 'B' && s[i+1] == 'G') {
				s[i] = 'G';
				s[i + 1] = 'B';
			}
			i++;
		}
	}
	printf("%s\n",s);
	return 0;
}
