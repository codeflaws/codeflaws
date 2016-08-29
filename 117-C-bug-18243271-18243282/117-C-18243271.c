#include<stdio.h>
char arr[5500][5500];
int visited[5500];
int chk[5500];
void dfs(int v,int parent,int val){
    visited[v]=1;
    int i;
   // printf("%d ",v);
    for(i=1;i<=val;i++){
        if(arr[v][i]=='1' && visited[i] && !chk[i]){
             printf("%d %d %d",i,parent,v);
             exit(1);
        }
        if(arr[v][i]=='1' && !visited[i])
            dfs(i,v,val);
    }
    chk[v]=1;
}
int main(int argc, char *argv[]){
int a,b,c,d,e,f;
scanf("%d",&a);
getchar();
int i;
for(i=1;i<=a;i++){
scanf("%s",&arr[i][1]);
}
for(i=1;i<=a;i++){
        if(!visited[i]){
        dfs(i,-1,a); }
}
printf("-1");
return 0;
}
