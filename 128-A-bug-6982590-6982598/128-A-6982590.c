#include <stdio.h>

const int di[] = {-1, -1, 0, 1, 0, -1, 0};
const int dj[] = {0, 1, 1, -1, -1, -1, 0};

char board[8][9];

int dfs(int i, int j, int turn) {
    int k;

    if (i == 0 && j == 7)
        return 1;

    for (k = 0; k < 7; k++) {
        int ni = i + di[k], nj = j + dj[k];

        if (ni >= 0 && ni < 8 && nj >= 0 && nj < 8 && (ni - turn < 0 || board[ni - turn][nj] != 'S' && (ni - turn - 1 < 0 || board[ni - turn - 1][nj] != 'S')))
            if (dfs(ni, nj, turn + 1))
                return 1;
    }

    return 0;
}

int main(int argc, char *argv[]) {
    int i;

    for (i = 0; i < 8; i++)
        scanf("%s", board[i]);

    puts(dfs(7, 0, 0) ? "WIN" : "LOSE");

    return 0;
}