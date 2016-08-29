#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char temp[10005];

void rotate(char *input, int l, int r, int k) {
    int length = r - l + 1;
    int steps = k % length;
    if (steps) {
        steps = length - steps;
        int f = l - 1;
        int s = f + steps;
        char *first = &input[f];
        int l1 = steps;
        char *second = &input[s];
        int l2 = length - steps;
        strncpy(temp, second, l2);
        strncpy(&temp[l2], first, l1);
        strncpy(&input[f], temp, length);
    }
}

int main(int argc, char *argv[]) {
    char input[10005];
    char buffer[256];
    fgets(input, 10005, stdin);
    fgets(buffer, 256, stdin);
    int queries = atoi(buffer);
    for (int i = 0; i < queries; i++) {
        // fgets(buffer, 256, stdin);
        int l, r, k;
        scanf("%d %d %d", &l, &r, &k);
        /*
        int params[3];
        int last = 0;
        int pos = 0;
        for (int j = 0; j < 3; j++) {
            while (buffer[pos] != ' ' && buffer[pos] != '\n') {
                pos += 1;
            }
            params[j] = atoi(&buffer[last]);
            pos += 1;
            last = pos;
        }
        l = params[0];
        r = params[1];
        k = params[2];
        */
        printf("%d %d %d\n",l , r, k);
        rotate(input, l, r, k);
    }
    printf("%s\n", input);
return 0;
}
