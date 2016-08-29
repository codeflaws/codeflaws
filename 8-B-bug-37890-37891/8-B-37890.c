#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char map[403][403];
    int x = 202;
    int y = 202;
    char c;

    memset(map, 0, sizeof(map));

    map[x][y] = 1;

    while (scanf("%c", &c) && c != '\n') {
        switch (c) {
            case 'L':
                --x;
                break;
            case 'R':
                ++x;
                break;
            case 'U':
                --y;
                break;
            case 'D':
                ++y;
                break;
        }


        if (map[x][y] ||
                (c != 'L' && map[x + 1][y]) ||
                (c != 'R' && map[x - 1][y]) ||
                (c != 'U' && map[x][y + 1]) ||
                (c != 'D' && map[y][y - 1])) 
            goto error;

        map[x][y] = 1;
    }

    puts("OK");

    return 0;

error:

    puts("BUG");

    return 0;
}
