#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n, k, i, num=1, total=0;
	int *data;
	int result, temp;

	scanf("%d %d", &n ,&k);

	data = (int*)malloc(sizeof(int)*n);

	for ( i = 0; i<n; i++ ){
		scanf("%d", &data[i]);
	}

	temp = k;
	while (1){
		total += num;

		if (k < total)
			break;
		temp -= num;
		num++;
	}

	result = num%n-1;

	printf("%d\n", data[temp-1]);

	return 0;

}
