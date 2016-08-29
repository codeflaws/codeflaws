#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int N;
	int* lengths = NULL;
	int max = 0;
	int total = 0;
	int i;

	scanf("%d",&N);

	lengths = (int*)malloc(N*sizeof(int));

	for(i = 0 ; i < N ; i++){
		scanf("%d",&lengths[i]);
		if(lengths[i] > max)
			max = lengths[i];
		total += lengths[i];
	}

	printf("%d\n",total - max + 1);

	free(lengths);
	return 0;
}
