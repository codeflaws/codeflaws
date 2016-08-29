#include<stdio.h>


int main(int argc, char *argv[]) {
    long int num;
    long int i;
    int input;
    long int sum = 0;

    scanf("%ld", &num);

    for ( i = 0 ; i < num ; i++ ) {
        scanf("%d", &input);
        sum += input;
    }

    if (sum%2) {
        printf("%ld\n", num-1);
    } else {
        printf("%ld\n", num);
    }
    return 0;
}
