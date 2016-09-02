#include <stdio.h>

int dx[]={1,-1,1,0,-1,1,0,-1},dy[]={0,0,-1,-1,-1,-2,-2,-2};
char f[16][16],p[16][16];

void dfs(y,x){
    if(p[y][x]++)return;
    if(y<=1) exit((puts("WIN") ));
    int i,tx,ty;
    for(i=0;i<8;i++){
        ty=y+dy[i]; tx=x+dx[i];
        if(tx&&f[ty][tx]!='S'&&f[ty+1][tx]!='S') dfs(ty,tx);
    }
}

int main(int argc, char *argv[]){
    int i;
    memset(f,'S',sizeof(f));
    for(i=1;i<=8;i++) fgets(f[i]+1,15,stdin);
    dfs(8,1); puts("LOSE");
    return 0;
}
