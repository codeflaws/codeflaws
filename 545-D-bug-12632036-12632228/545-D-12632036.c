#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[]) {

    int n, sum = 0, notdis = 0, j;


    scanf("%d", &n);
    int* values = malloc(n*sizeof(int));

    for(j = 0; j < n; j++){
        scanf("%d", &values[j]);
    }
    qsort (values, n, sizeof(int), compare);
    for(j = 0; j < n; j++){
        if(sum <= values[j])
            notdis++;
            sum+=values[j];
    }
    printf("%d\n", notdis);

    return 0;
}

