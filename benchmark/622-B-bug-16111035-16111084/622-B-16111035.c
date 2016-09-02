#include <stdio.h>

int main(int argc, char *argv[])
{
	int reshours, resmins, min, tmp;
	scanf("%d %d %d", &reshours, &resmins, &min);
	tmp = min / 60;
	resmins += min - tmp * 60;
	reshours += resmins / 60;
	if (resmins / 60 > 0)
		resmins -= (resmins / 60) * 60;
	reshours += tmp % 24;
	if (reshours / 24 > 0)
		reshours %= 24;
	printf("%.2d:%.2d", reshours, resmins);
	return 0;
}