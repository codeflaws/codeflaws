#include <stdio.h>
#include <string.h>
#include <math.h>
#include <memory.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    char foot[1010];
    int n, c, i = 0, left = 0;
    int s, t;
    scanf("%d", &n);getchar();
    for(;;){
        c = getchar();
        left++;
        if(c != '.')
        break;
    }
    for(;;){
        foot[i++] = c;
        c = getchar();
        if(c == '.')
        break;
    }
    n = i;
    if(foot[0] == 'L'){
        s = n-1;
        t = 0;
    }
    if(foot[0] == 'R'){
        s = 0;
        for(i = 0;;i++){
            if(foot[i] != 'R')
            break;
        }
        t = i-1;
        if(i == n){
            t = i;
            s = t-1;
        }
    }
    printf("%d %d\n", s+left, t+left);
    return 0;
}
