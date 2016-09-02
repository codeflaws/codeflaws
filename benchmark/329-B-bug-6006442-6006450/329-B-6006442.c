#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#define INF INT_MAX
#define MAX 100000
#define WHITE 0
#define BLACK 1

char map[1005][1005];
int d[1005][1005];
int color[1005][1005];
int fila[MAX][2];
int front, end;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

void put(int a, int b) {
    if (end >= MAX) {
        end = 0;
    }
    fila[end][0] = a;
    fila[end++][1] = b;
}

int main(int argc, char *argv[]) {
    int r, c;
    int i, j;
    int sx, sy;
    int fx, fy;
    int x, y;
    int nx, ny;
    int counter = 0;
    int max;

    scanf(" %d %d", &r, &c);

    for (i = 0; i < r; i++) {
        scanf(" %s", map[i]);
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            d[i][j] = INF;
            color[i][j] = WHITE;
            if (map[i][j] == 'E') {
                sx = i;
                sy = j;
            } else if (map[i][j] == 'S') {
                fx = i;
                fy = j;
            }
        }
    }

    counter = 0;
    max = INF;
    front = end = 0;
    color[sx][sy] = BLACK;
    d[sx][sy] = 0;
    put(sx, sy);

    while(front != end) {
        x = fila[front][0];
        y = fila[front][1];

        if (d[x][y] > max) {
            break;
        }
        if (map[x][y] == 'S') {
            max = d[x][y];
        }
        if (isdigit(map[x][y])) {
            counter += map[x][y] - '0';
        }
        front++;
        if (front >= MAX) {
            front = 0;
        }

        for (i = 0; i < 4; i++) {
            nx = x + dx[i];
            ny = y + dy[i];
            if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
                if (map[nx][ny] != 'T' && color[nx][ny] == WHITE) {
                    color[nx][ny] = BLACK;
                    d[nx][ny] = d[x][y] + 1;
                    put(nx, ny);
                }
            }
        }
    }

    printf("%d\n", counter);

    return 0;
}