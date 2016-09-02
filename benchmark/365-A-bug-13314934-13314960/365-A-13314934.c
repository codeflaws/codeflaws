#include <stdio.h>

int main(int argc, char *argv[]){
    int x;
    int l[] = {1, 3, 7, 15, 31, 63, 127, 255, 511,1023};
    int n, k, m,t;
    for (; ~scanf("%d%d", &n, &k);){
        for (m = 0; n--;m+=x==l[k]){
            scanf("%d", &t);
            x = 1;
            if (t)
                for (x = 0; t; t /= 10)
                    x |= 1 << (t % 10);       
        }
        printf("%d\n", m);
    }
    return 0;
}