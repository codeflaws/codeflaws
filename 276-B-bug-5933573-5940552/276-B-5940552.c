#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *str;
	int *freq;
	int odd_count, ev_count, i, len;

	str = malloc(1001*sizeof(char));
	freq = calloc(27, sizeof(int));

	scanf("%s", str);
	len = strlen(str);
	for(i=0; i<len; ++i) ++freq[str[i]-'a'];

	for(i=0, odd_count=0, ev_count=0; i<27; ++i) {
		if(freq[i]%2 == 0) ++ev_count;
		else ++odd_count;
	}

	if(odd_count == 0) printf("First");
	else printf("%s", (odd_count-1)%2 == 0 ? "First" : "Second");

	return 0;
}