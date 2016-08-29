#include <stdio.h>

int step[4][2] = {{ -1, 0}, {0, 1}, {1, 0}, {0, -1}};
char Visited[10][10];
char Map[10][11];
int w, h, Ans;

void Fun(int x, int y, int dir)
{
    int newx, newy;
    char flag = 0;
    while(1) {
        if(!Visited[x][y]) {
            ++Ans;
        }
        if(++Visited[x][y] == w * h) {
            return;
        }
loop:
        newx = x + step[dir][0];
        newy = y + step[dir][1];
        if(newx >= 0 && newx < w && newy >= 0 && newy < h && Map[newx][newy] != '*') {
            flag = 0;
            x = newx;
            y = newy;
        } else {
            dir = (dir + 1) & 3;
            ++flag;
            if(flag == 4) {
                return;
            }
            goto loop;
        }
    }
}

int main(int argc, char *argv[])
{
    int i, j, x, y, dir;
    scanf("%d %d", &w, &h);
    for(i = 0; i < w; ++i) {
        scanf("%s", Map[i]);
        for(j = 0; j < h; ++j) {
            if(Map[i][j] == 'U') {
                x = i;
                y = j;
                dir = 0;
            }
            if(Map[i][j] == 'R') {
                x = i;
                y = j;
                dir = 1;
            }
            if(Map[i][j] == 'D') {
                x = i;
                y = j;
                dir = 2;
            }
            if(Map[i][j] == 'L') {
                x = i;
                y = j;
                dir = 3;
            }
        }
    }
    Fun(x, y, dir);
    printf("%d\n", Ans);
    return 0;
}
