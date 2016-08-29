#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char room[100][101];
char table[26];

int main(int argc, const char * argv[]) {
    int n, m, i, j, count;
    char C;
    
    scanf("%d%d", &n, &m);
    getchar();
    C = getchar();
    getchar();
    for(i = 0; i < n; i++){
        gets(room[i]);
    }
    count = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(room[i][j] != C) continue;
            if(i >= 1 && room[i-1][j] != '.' && room[i-1][j] != C && !table[room[i-1][j] - 'A']){
                table[room[i-1][j] - 'A'] = 1;
                count++;
            }
            if(i < n - 1 && room[i+1][j] != '.' && room[i+1][j] != C && !table[room[i+1][j] - 'A']){
                table[room[i+1][j] - 'A'] = 1;
                count++;
            }
            if(j >= 1 && room[i][j-1] != '.' && room[i][j-1] != C && !table[room[i][j-1] - 'A']){
                table[room[i][j-1] - 'A'] = 1;
                count++;
            }
            if(j < m - 1 && room[i][j+1] != '.' && room[i][j+1] != C && !table[room[i][j+1] - 'A']){
                table[room[i][j+1] - 'A'] = 1;
                count++;
            }
        }
    }
    printf("%d\n", count);
    
    return 0;
}
