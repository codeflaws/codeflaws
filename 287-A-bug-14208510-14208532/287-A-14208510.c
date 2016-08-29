#include<stdio.h>

int main(int argc, char *argv[])
{
    char g[5][5];
    int i, j, d=0, h=0;
    for(i=0; i<4; i++){
            gets(g[i]);
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(g[i][j]=='.' ) d++;
            else h++;
            if (g[i][j+1]=='.') d++;
            else h++;
            if(g[i+1][j]=='.') d++;
            else h++;
            if(g[i+1][j+1]=='.') d++;
            else h++;
            if(d==3 || h==3){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
