#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        int sum, limit, i, size, count, numberplace, fauxi;
        size = 0;
        int mask = 1;
        fscanf(stdin, "%d %d", &sum, &limit);
        int *numbers = malloc(sizeof(int)*limit);
        for(i = limit; i > 0; i--) {
                count = 1;
                fauxi = i;
                while((mask & fauxi) == 0) {
                        count = count*2;
                        fauxi >>= 1;
                }

                if(sum - count > 0) {
                        sum = sum - count;
                        numbers[size] = i;
                        size++;
                }

                if (sum - count == 0) {
                        sum = sum - count;
                        numbers[size] = i;
                        size++;
                        break;
                }
        }

        if(sum == 0) {
                printf("%d\n", size);
                for (i = 0; i < size; i++) {
                        printf("%d", numbers[i]);
                        if(i != size-1) printf(" ");
                        }
        }

        else printf("-1");
        free(numbers);

        exit(0);
return 0;
}
