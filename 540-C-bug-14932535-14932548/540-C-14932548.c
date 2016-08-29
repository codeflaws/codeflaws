#include <stdio.h>
#include <string.h>

int N, M;
char Map[500][501];
char Visit[500][501];
int Queue[250000][2];
int step[4][2] = {{ -1, 0}, {1, 0}, {0, -1}, {0, 1}};

int BFS(int x, int y, int tx, int ty)
{
    int Head, Tail, i;
    Head = 0;
    Tail = 1;
    Queue[Head][0] = x;
    Queue[Head][1] = y;
    memset(&Visit, 0, sizeof(Visit));
    while(Head < Tail) {
        for(i = 0; i < 4; ++i) {
            int newX = Queue[Head][0] + step[i][0];
            int newY = Queue[Head][1] + step[i][1];
            if(newX >= 0 && newX < N && newY >= 0 && newY < M) {
                if(newX == tx && newY == ty) {
                    return 1;
                }
                if(!Visit[newX][newY] && Map[newX][newY] == '.') {
                    Visit[newX][newY] = 1;
                    Queue[Tail][0] = newX;
                    Queue[Tail++][1] = newY;
                }
            }
        }
        ++Head;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int i, r1, c1, r2, c2;
    scanf("%d %d", &N, &M);
    for(i = 0; i < N; ++i) {
        scanf("%s", Map[i]);
    }
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    --r1, --c1, --r2, --c2;
    char flag = 1;
    if(Map[r2][c2] != 'X') {
        int cnt = 0;
        for(i = 0; i < 4; ++i) {
            int newX = r2 + step[i][0];
            int newY = c2 + step[i][1];
            if(newX >= 0 && newX < N && newY >= 0 && newY < M) {
                if(Map[newX][newY] == '.' || (newX == r1 && newY == c1)) {
                    ++cnt;
                }
            }
        }
        flag = cnt > 1;
    }
    puts((flag && BFS(r1, c1, r2, c2)) ? "YES" : "NO");
    return 0;
}
