#include <stdio.h>
#include <string.h>

int t[1000005];
char str[1000005];

int main(int argc, char *argv[]){
	while (~scanf("%s", str)) {
		int len = strlen(str), cnt = 0, i, pos=0;
		for (i=0; i<len; i++) {
			if (str[i] == 'F') {
				cnt++;
				t[cnt] = (i+1) - cnt;
				if (cnt == 2) {
					pos = i;
				}
			}
		}
		if (cnt ==0 ) {
			puts("0"); continue;
		}
		else if (cnt == 1) {
			printf("%d\n", t[1]); continue;
		}
		int cur = 2;
		for (i=pos; i<len; i++) {
			if (str[i] == 'M') {
				continue;
			}
			if (t[cur] == 0) {
				cur++;
				continue;
			}
			if (t[cur] <= t[cur-1]) {
				t[cur]++;
			}
			cur++;
		}

		printf("%d\n", t[cnt]);
	}

	return 0;
}
