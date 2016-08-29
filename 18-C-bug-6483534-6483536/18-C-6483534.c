#include <stdio.h>

#define MAX 100000

int main(int argc, char *argv[]) {
    long long int sum = 0, partial = 0, possibilities = 0;
    int n, i;
    int squares[MAX + 1];

    scanf ("%d", &n);

    for (i = 0; i  < n; i++) {
        scanf ("%d", &squares[i]);
        sum += squares[i];
    }

    for (i = 0; i < n - 1; i++) {
        partial += squares[i];
        sum -= squares[i];
        if (sum == partial) {
            //printf("%d)
            possibilities++;
        }
    }

    printf("%lld\n", possibilities);

}