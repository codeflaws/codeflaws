#include <stdio.h>
#include <stdlib.h>

#define asdsd(f1, f2) for(int i=0;i<f1;i++){f2[i]=0;}

int main(int argc, char *argv[]) {
    int N, S;
    scanf("%d %d", &N, &S);
    int *array[N];
    int array_1[S + 1];
    asdsd(S+1, array_1);
    for (int i = 0; i < N; i++) {
        array[i] = (int * )malloc(2 * sizeof(int));
        scanf("%d %d", &array[i][0], &array[i][1]);
        array_1[array[i][0]] = (array_1[array[i][0]] < array[i][1]) ? array[i][1] : array_1[array[i][0]];
    }
    int sum = 0;
    for (int i = S; i > 0; i--) {
        sum += 1 + ((array_1[i] - sum) > 0 ? array_1[i] -sum : 0);
        // printf("%d | %d | %d\n", i, array_1[i], sum);
    }
    printf("%d\n", sum);
    return 0;
}