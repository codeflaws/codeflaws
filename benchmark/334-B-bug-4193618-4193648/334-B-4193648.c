#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _P {
    unsigned x;
    unsigned y;
} Point;

int comparePoint(const void *_a, const void *_b) {
    Point *a = (Point*)_a;
    Point *b = (Point*)_b;
    return a->x - b->x ? a->x - b->x : a->y - b->y;
}

bool parallelLine(Point pAA, Point pAB, Point pAC,
        Point pBA, Point pBB, Point pBC) {
    if(pAA.x == pAB.x && pAA.x == pAC.x)
        if(pBA.x == pBB.x && pBA.x == pBC.x)
            if(pAA.y == pBA.y && pAB.y == pBB.y && pAC.y == pBC.y)
                if(pAA.y != pAB.y && pAA.y != pAC.y)
                   return true;
    if(pAA.y == pAB.y && pAA.y == pAC.y)
        if(pBA.y == pBB.y && pBA.y == pBC.y)
            if(pAA.x == pBA.x && pAB.x == pBB.x && pAC.x == pBC.x)
                if(pAA.x != pAB.x && pAA.x != pAC.x)
                     return true;
    return false;
}

const char* answers[2] = {"respectable\n", "ugly\n"};

int main(int argc, char *argv[]) {
    short i;
    
    Point ps[8];
    for(i = 0; i < 8; i++)
        scanf("%u%u", &ps[i].x, &ps[i].y);
    
    qsort(ps, 8u, sizeof(Point), comparePoint);
    
    if(parallelLine(ps[0], ps[1], ps[2], ps[5], ps[6], ps[7]) &&
            parallelLine(ps[0], ps[3], ps[5], ps[2], ps[4], ps[7]))
        printf(answers[0]);
    else
        printf(answers[1]);
    
    return 0;
}
