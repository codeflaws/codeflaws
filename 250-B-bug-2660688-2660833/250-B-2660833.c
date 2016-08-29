#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int TestCases, Counter;
char Input[100];
char Block[10][10];
int Blocker[10];
int L, x, y, i, S;

int main(int argc, char *argv[]){
    scanf("%d", &TestCases);
    while(TestCases--){
        memset(Block, 0, sizeof(Block));
        
        scanf("%s", Input);
        L = strlen(Input);
        y = 0;
        x = 0;
        S = 0;
        
        for (i=0; i<L; i++){
            if (Input[i]!=':'){
                Block[y][x] = Input[i];
                x++;
                continue;
            }
            if (Input[i+1]==':'){
                S = 1;
                break;
            }
            x = 0;
            y++;
        }
        
        if (S){
            y = 7;
            x = 3;
            for (i=L-1; i>=0; i--){
                if (Input[i]!=':'){
                    Block[y][x] = Input[i];
                    x--;
                    continue;
                }
                for ( ; x>=0; x--) Block[y][x] = 48;
                if (Input[i-1]==':') break;
                x = 3;
                y--;
            }
        }
        
        for (i=strlen(Block[0]); i<4; i++) putchar(48);
        printf("%s", Block[0]);
        
        for (y=1; y<8; y++){
            putchar(':');
            
            for (i=strlen(Block[y]); i<4; i++) putchar(48);
            printf("%s", Block[y]);
        }
        putchar(10);
    }
    
    return 0;
}
