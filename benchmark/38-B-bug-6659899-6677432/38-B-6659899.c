#include <stdio.h>

char piece[4];

int rx, ry, kx, ky;

int abs(int a){ return a < 0 ? -a : a; }

int ok(int x, int y){
    int dx = abs(x - kx), dy = abs(y - ky);
    if(abs(dx - dy) == 1 && dx + dy == 3) return 0;
    dx = abs(x - rx), dy = abs(y - ry);
    if(abs(dx - dy) == 1 && dx + dy == 3) return 0;
    return x != rx && y != ry && (x != kx || y != ky);
}

int main(int argc, char *argv[]){
    int ans = 0, i, j;
    scanf("%s", piece); rx = piece[0] - 'a', ry = piece[1] - '1';
    scanf("%s", piece); kx = piece[0] - 'a', ky = piece[1] - '1';
    for( i = 0; i < 8; ++i){
        for( j = 0; i < 8; ++j){
            ans += ok(i,j);
        }
    }
    printf("%d\n", ans);
    return 0;
}