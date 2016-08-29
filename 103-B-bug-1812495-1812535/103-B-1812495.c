/*
 * Cthulhu.c
 *
 *  Created on: Jun 21, 2012
 *      Author: mahmoudradwan
 */
#include <stdio.h>
int p[100005];
int find(int i) {
    if (p[i] == i)
        return i;
    return p[i] = find(p[i]);
}
int main(int argc, char *argv[]) {
    int a, b, i, f, t;
    scanf("%d %d", &a, &b);
    if (b < a) {
        puts("NO");
    } else {
        for (i = 1; i <= a; i++)
            p[i] = i;
        for (i = 1; i <= b; i++) {
            scanf("%d %d", &f, &t);
            p[find(f)] = find(t);
        }
        int c = 0;
        for (i = 1; i <= a; i++)
            c += find(i) == i;
        if (c != 1)
            puts("NO");
        else
            puts("FHTAGN!");
    }
    return 0;
}
