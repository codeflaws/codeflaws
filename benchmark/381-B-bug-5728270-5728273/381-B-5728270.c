//
//  main.c
//  386D
//

#include <stdio.h>
#import <stdlib.h>

int* read_input(int* size) {
    int i=0;
    int* numbers;

    scanf("%d", size);
    numbers = (int*) malloc(sizeof(int) * (*size));

    for ( i = 0 ; i < *size; i ++)
        scanf("%d", &numbers[i]);

    return numbers;
}

int intcmpdesc (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}

int intcmpasc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}


void print_numbers(int* numbers, int size) {
    int i;
    for ( i = 0 ; i < size; i++ )
        if ( numbers[i] != 0)
        printf("%d, ", numbers[i]);
    printf("\n");
}




int main(int argc, const char * argv[])
{
    int size, i;
    int* numbers;
    int*out;
    int max;
    int middle;
    int li, ri, maxr;
    int discarded = 0;



    numbers = read_input(&size);
    out = calloc((size_t) size, sizeof(int));

    qsort (numbers, (size_t) size, sizeof(int), intcmpasc);

    middle = size/2;
    li = 0; ri = size-1;
    max = numbers[size-1];
    //printf("max=%d\n",max);
    out[middle] = max;
    maxr = size-2;

    while ( numbers[maxr] == max && maxr >= 0 ) {/*printf("%d discarded (max)\n",
    numbers[maxr]); */discarded++; maxr--;}

    if ( maxr == -1 )
        out[li++] = numbers[0];
    for ( i = 1 ; i <= maxr ; i++) {
        //printf("---\n");
        //printf("numbers[i]=%d, %d\n",numbers[i], i);
        //print_numbers(out, size);
        //printf("---\n");

        if ( numbers[i] == out[li-1]) {
            if ( ri < size-1 && numbers[i] == out[ri+1] ) {
                discarded ++;
                //printf("%d discarded (repeated)\n", numbers[i]);
                continue;
            }

            if ( ri == middle ) {
                //printf("[MOVING MIDDLE BACKWARD]\n");
                out[middle-1] = out[middle];
                middle--;
            }
            //printf("[RIGHT] %d put at %d\n", numbers[i], ri);
            out[ri--] = numbers[i];
        } else {
            if ( li == middle )   {
                //printf("[MOVING MIDDLE FORWARD]\n");
                out[middle+1] = out[middle];
                ++middle;
            }
            //printf("[LEFT] %d put at %d\n", numbers[i], li);
            out[li++] = numbers[i];

        }

    }

    printf("%d\n", size-discarded);
    for ( i = 0; i < size; i ++)
        if ( out[i] != 0 )
            printf("%d ", out[i]);
    printf("\n");
    //print_numbers(out, size);
    //printf("\n");

    free(numbers);
    free(out);
    return 0;
}
