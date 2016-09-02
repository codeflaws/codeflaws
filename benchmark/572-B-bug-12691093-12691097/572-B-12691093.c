#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int p;
    int q;
} Exchange_t;
Exchange_t S[1000];
Exchange_t B[1000];
int SizeS, SizeB;

int cmpdesc(const void *a, const void *b)
{
    return (*(Exchange_t *)b).p - (*(Exchange_t *)a).p;
}

int main(int argc, char *argv[])
{
    int N, s, p, q, i;
    char D[2];
    scanf("%d %d", &N, &s);
    while(N--) {
        scanf("%s %d %d", D, &p, &q);
        if(D[0] == 'S') {
            for(i = 0; i < SizeS; ++i) {
                if(S[i].p == p) {
                    S[i].q += q;
                    break;
                }
            }
            if(i == SizeS) {
                S[SizeS].p = p;
                S[SizeS++].q = q;
            }
        } else {
            for(i = 0; i < SizeB; ++i) {
                if(B[i].p == p) {
                    B[i].q += q;
                    break;
                }
            }
            if(i == SizeB) {
                B[SizeB].p = p;
                B[SizeB++].q = q;
            }
        }
    }
    qsort(S, SizeS, sizeof(Exchange_t), cmpdesc);
    qsort(B, SizeB, sizeof(Exchange_t), cmpdesc);
    for(i = SizeS - s > 0 ? SizeS - s : 0; i < SizeS; ++i) {
        printf("S %d %d\n", S[i].p, S[i].q);
    }
    for(i = 0; i < s; ++i) {
        printf("B %d %d\n", B[i].p, B[i].q);
    }
    return 0;
}
