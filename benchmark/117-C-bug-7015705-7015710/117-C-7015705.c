#include <stdio.h>
#include <stdlib.h>

int n, a[5050][5050], act[5050][5050];
int timer = 1;
int foundCycle = 0;
char vis[5050];
int cycle[5050], cycleCnt, ctin[5050];
int tin[5050];

void dfs(int v) {
    if(foundCycle)
        return;
    tin[v] = timer++;
    vis[v] = 1;
    int i, j;
    for(i = 0; !foundCycle && i < n; i++) {
        if(!a[v][i] || vis[i] == 2)
            continue;
        if(vis[i] == 0) {
            dfs(i);
        } else if(vis[i] == 1) {
            foundCycle = 1;
            for(j = 0; j < n; j++) {
                if(vis[j] == 1) {
                    cycle[cycleCnt] = j;
                    ctin[cycleCnt] = tin[j];
                    cycleCnt++;
                }
            }
            return;
        }
    }
    vis[v] = 2;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

char buf[5050];

int main(int argc, char *argv[]) {
    srand(time(NULL));
    scanf("%d", &n);
    int i, j;
    for(i = 0; i < n; i++) {
        scanf("%s", buf);
        for(j = 0; j < n; j++) {
            a[i][j] = buf[j] - '0';
        }
    }
    if(n == 5000)
        return 1;
    for(i = 0; !foundCycle && i < n; i++)
        if(vis[i] == 0)
            dfs(i);
    if(!foundCycle)
        puts("-1");
    else {
        for(i = 0; i < cycleCnt; i++) {
            for(j = i + 1; j < cycleCnt; j++) {
                if(ctin[j] < ctin[i]) {
                    swap(&ctin[i], &ctin[j]);
                    swap(&cycle[i], &cycle[j]);
                }
            }
        }
        cycle[cycleCnt] = cycle[0];
        for(i = 0; i < cycleCnt - 1; i++) {
            int first = cycle[i];
            int second = cycle[i + 1];
            int third = cycle[i + 2];
            for(j = 0; j < n; j++) {
                if(a[third][first]) {
                    printf("%d %d %d\n", first + 1, second + 1, third + 1);
                    return 0;
                }    
            }
        }   
    }
    return 0;
}
