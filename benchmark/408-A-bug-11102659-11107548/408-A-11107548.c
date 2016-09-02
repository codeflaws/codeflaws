#include <stdio.h>

int main(int argc, char *argv[]) {
	int cashierCount, customerCount[100], itemCount;
	int timeNeeded, minTimeNeeded;
	int i, j, k;

	timeNeeded = 0;
	minTimeNeeded = -1;

	scanf("%d", &cashierCount);

	for(i = 0; i < cashierCount; i++) {
		scanf("%d", &customerCount[i]);
	}

	for(i = 0; i < cashierCount; i++, timeNeeded = 0) {
		for(j = 0; j < customerCount[i]; j++) {
			scanf("%d", &itemCount);
			timeNeeded += (itemCount * 5) + 15;
		}

		if(timeNeeded < minTimeNeeded || minTimeNeeded == -1) {
			minTimeNeeded = timeNeeded;
		}
	}

	printf("%d", minTimeNeeded);

	return 0;
}