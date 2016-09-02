#include <stdio.h>
#include <string.h>

#define MXS 100*2-1+1

int main(int argc, char *argv[]) {
    int n, k, i;
    scanf("%d\n", &n);
    char in[MXS];
    int out[100];

    fgets(in, MXS, stdin);
    for(k=1, out[atoi(strtok(in, " "))-1] = 1; k<n; ++k) {
        out[atoi(strtok(NULL, " "))-1] = k+1;
    }

    for(k=0; k<n; ++k) printf("%d ", out[k]);

    return 0;
}
