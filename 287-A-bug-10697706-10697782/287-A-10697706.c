#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    char s[4][4] ;
    int i , j, k;
    for(i=0;i<4;i++){
        gets(s[i]) ;
        }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((s[i][j] == s[i+1][j] && s[i][j+1] != s[i+1][j+1]) ||(s[i][j] != s[i+1][j] && s[i][j+1] == s[i+1][j+1] )){
                printf("YES");
                return 0;
                }
            }
        }
    printf("NO");
    return 0;
    }
