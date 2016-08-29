#include <stdio.h>

int n,m,e[111][2],c[111],seen[111];
int a,b,i,j,k;
int ans;

void dfs(int from,int now,int goal,int count){
    if(now==goal){
        ans+=count;
        seen[now]++;
        return;
    }
    if(seen[now]++) return;
    if(c[now]!=2) return;
    int next = e[now][0]^e[now][1]^from;
    dfs(now,next,goal,count^1);
}

int main(int argc, char *argv[]){
    scanf("%d%d",&n,&m);
    while(m--){
        scanf("%d%d",&a,&b);
        e[a][c[a]++]=b; e[b][c[b]++]=a;
    }

    for(i=1;i<=n;i++){
        if(c[i]==2) dfs(i,e[i][0],i,1);
    }

    printf("%d\n",ans);
    return 0;
}
