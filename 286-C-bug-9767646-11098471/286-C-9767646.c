#include<stdio.h>
#include<string.h>
#define N 1000010
int a[N], stack[N], ans[N], vis[N];
int main(int argc, char *argv[]){
    memset(vis, 0, sizeof(vis));
    int n, t, d, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &d);
        vis[d-1]=1;
    }
    if(n%2==1) { printf("NO\n"); return 0;}
    int top=0, cnt=n;
    for(i=n-1; i>=0; i--){
        if(!top||vis[i]||stack[top-1]!=a[i]){
            stack[top++]=a[i]; ans[--cnt]=-a[i];
        }
        else ans[--cnt]=stack[--top];
    }
    if(top!=0) printf("NO\n");
    else {
        printf("YES\n");
        for(i=0; i<n-1; i++) printf("%d ", ans[i]);
        printf("%d\n", ans[i]);
    }
}
