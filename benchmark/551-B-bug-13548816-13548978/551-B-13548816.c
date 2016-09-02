#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "limits.h"

#define BUFFER_SIZE 100001
#define ALPHABET_SIZE 26
#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

int main(int argc, char ** args) {
	char a[BUFFER_SIZE], b[BUFFER_SIZE], c[BUFFER_SIZE];
	int i, j, len_a, len_b, len_c, *a_cnt, *b_cnt, *c_cnt;
	int b_max, c_max = 0, b_curr = INT_MAX, c_curr;
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	a_cnt = (int *) calloc(ALPHABET_SIZE, sizeof(*a_cnt));
	b_cnt = (int *) calloc(ALPHABET_SIZE, sizeof(*b_cnt));
	c_cnt = (int *) calloc(ALPHABET_SIZE, sizeof(*c_cnt));
	len_a = strlen(a);
	len_b = strlen(b);
	len_c = strlen(c);
	for (i = 0; i < len_a; i++) {
		a_cnt[a[i] - 'a']++;
	}
	for (i = 0; i < len_b; i++) {
		b_cnt[b[i] - 'a']++;
	}
	for (i = 0; i < len_c; i++) {
		c_cnt[c[i] - 'a']++;
	}
	
	for (i = 0; i < ALPHABET_SIZE; i++) {
		if (b_cnt[i]) {
			b_curr = min(b_curr, a_cnt[i] / b_cnt[i]);
		}
	}
	b_max = max(b_curr, 0);
	for (i = 0; i < b_curr; i++) {
		c_curr = INT_MAX;
		for (j = 0; j < ALPHABET_SIZE; j++) {
			if (c_cnt[j]) {
				c_curr = min(c_curr, (a_cnt[j] - b_cnt[j] * i) / c_cnt[j]);
			}
		}
		if (c_curr != INT_MAX && i + c_curr > b_max + c_max) {
			b_max = i;
			c_max = c_curr;
		}
	}

	for (i = 0; i < b_max; i++) {
		printf("%s", b);
	}
	for (i = 0; i < c_max; i++) {
		printf("%s", c);
	}
	for (i = 0; i < ALPHABET_SIZE; i++) {
		for (j = 0; j < a_cnt[i] - b_max * b_cnt[i] - c_max * c_cnt[i]; j++) {
			printf("%c", 'a' + i);
		}
	}
	printf("\n");
	free(a_cnt);
	free(b_cnt);
	free(c_cnt);
	return 0;
}
