#include <stdio.h>

int are[1000005];

int main(int argc, char *argv[])
{
	long long v, qt, i, a, b, soma=0;
	scanf(" %lld %lld", &v, &qt);
	for(i=0;i<qt;i++)
	{
		scanf(" %lld %lld", &a, &b);
		are[a]++;
		are[b]++;
	}
	for(i=1;i<=v;i++)
		soma+=are[i]*(v-1-are[i]);
	printf("%lld", (long long)v*(v-1)*(v-2)/6-soma/2);
	return 0;
}
