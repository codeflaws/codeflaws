#include <stdio.h>

int a[100];

int get(int u){
    if (a[u] == u)
        return u;
    return (a[u] = get(a[u]));
}

int main(int argc, char *argv[]){
    int n, m, i, u, v;
    scanf("%d %d", &n, &m);
    if (n != m){
        printf("NO");
        return 0;
    }
    for (i = 1; i <= n; i++)
        a[i] = i;
    for (i = 0; i < m; i++){
        scanf("%d %d", &u, &v);
        u = get(u);
        v = get(v);
        if (u != v){
            a[v] = u;
            n--;
        }
    }
    if (n != 1)
        printf("NO");
    else
        printf("FHTAGN");
    return 0;
}