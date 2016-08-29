#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n, i, min, idx, dt;
	int soldier[100];
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &soldier[i]);
	}
	min = abs(soldier[n - 1] - soldier[0]);
	idx = 0;
	for(i = 0; i < n - 2; i++){
		dt = abs(soldier[i] - soldier[i + 1]);
		if(min > dt){
			min = dt;
			idx = i + 1;
		}
	}
	printf("%d %d\n", (idx + n - 1) % n + 1, idx % n + 1);
	return 0;
}
