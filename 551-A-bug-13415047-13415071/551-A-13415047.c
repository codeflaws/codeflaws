#include "stdio.h"
#include "stdlib.h"

int main(int argc, char ** args) {
	int i, length, counter = 1, bckp, *input, *tmp;
	scanf("%d", &length);
	input = (int *) malloc(length * sizeof(*input));
	tmp = (int *) calloc(2000, sizeof(*tmp));
	for (i = 0; i < length; i++) {
		scanf("%d", &input[i]);
	}
	for (i = 0; i < length; i++) {
		tmp[input[i] - 1]++;
	}
	for (i = length - 1; i >= 0; i--) {
		if (tmp[i]) {
			bckp = tmp[i];
			tmp[i] = counter;
			counter += bckp;
		}
	}
	for (i = 0; i < length - 1; i++) {
		printf("%d ", tmp[input[i] - 1]);
	}
	printf("%d\n", tmp[input[length - 1] - 1]);
	free(input);
	free(tmp);
return 0;
}
