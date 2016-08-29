#include <stdio.h>
int field[1000][1000];
int answers[996051];
int answer_index = 47; //'.' + 1
int n;
int m;
int k;
int x;
int y;
int quotient;
int ch;
int i;
int j;
void getnum(int* num) {
    *num = 0;
    for (ch = getc(stdin); ch >= '0' && ch <= '9'; ch = getc(stdin)) {
        *num = *num*10 + ch - '0';
    }
}
void printnum(int num) {
    quotient = num / 10;
    ch = num - quotient*10;
    if (quotient > 0) {
        printnum(quotient);
    }
    putc(ch+'0', stdout);
}
void bfs(int x, int y) {
    if (field[x][y] == 46) { //46 == '.'
        field[x][y] = answer_index;
        bfs(x-1,y);
        bfs(x+1,y);
        bfs(x,y-1);
        bfs(x,y+1);
    }
    else if (field[x][y] == 42) { //42 == '*'
        ++answers[answer_index];
    }
}
int main(int argc, char *argv[]) {
    getnum(&n);
    getnum(&m);
    getnum(&k);
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            field[i][j] = getc(stdin);
        }
        getc(stdin);
    }
    for (i = 0; i < k; ++i) {
        getnum(&x);
        --x;
        getnum(&y);
        --y;
        if (field[x][y] < 47) {
            bfs(x, y);
            ++answer_index;
        }
        printnum(answers[field[x][y]]);
        putc('\n', stdout);
    }
    return 0;
}
