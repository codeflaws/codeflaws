#include<stdio.h>

int main(int argc, char *argv[]) {
	int squares[1000];
	int n;
	scanf("%d", &n);
	int i=0;
	while(i<n) {
		scanf(" %d", &squares[i]);
		i++;
	}
	int max = 0;
	int j;
	i = 0;
	while(i<n) {
		int cur = 1;
		int prev = squares[i];
		j=i-1;
		while(j>=0) {
			if (squares[j] > prev) {
				break;
			} else {
				cur++;
				prev = squares[j];
			}
			j--;
		}
		j=i+1;
		while(j<n) {
			if (squares[j] > prev) {
				break;
			} else {
				cur++;
				prev = squares[j];
			}
			j++;
		}
		if (cur > max) max = cur;
		i++;
	}
	
	printf("%d", max);
	
	return 0;
}
