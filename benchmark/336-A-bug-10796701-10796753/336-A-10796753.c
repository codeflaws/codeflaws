#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    long long int x, y, x1, y1, x2, y2;
    scanf("%lld %lld", &x, &y);
    if((x*y)>0) {
        if(y<0) {
            y1 = 0;
            x2 = 0;
            x1 = abs(x) + abs(y);
            if(x<0) x1 *= -1;
            y2 = abs(x) + abs(y);
            if(y<0) y2 *= -1;
        }
        else {
            x1 = 0;
            y2 = 0;
            y1 = abs(x) + abs(y);
            if(y<0) y1 *= -1;
            x2 = abs(x) + abs(y);
            if(x<0) x2 *= -1;
        }
    }
    else {
        if(y<0) {
            x1 = 0;
            y2 = 0;
            y1 = abs(x) + abs(y);
            if(y<0) y1 *= -1;
            x2 = abs(x) + abs(y);
            if(x<0) x2 *= -1;
        }
        else {
            y1 = 0;
            x2 = 0;
            x1 = abs(x) + abs(y);
            if(x<0) x1 *= -1;
            y2 = abs(x) + abs(y);
            if(y<0) y2 *= -1;
        }
    }
    printf("%lld %lld %lld %lld", x1, y1, x2, y2);
    return 0;
}
