#include <stdio.h>
int distancia, grafo[100000],  visitado[100000]={0}, l[200000], Pesos[200000], Nodos[200000];
void dfs(int a, int b);
int main(int argc, char *argv[]) {
    int n,x, y,i, peso,k=0;
    scanf("%d", &n);
    for(i=0;i<100000;i++){
            grafo[i]=-1;
    }
    long long suma = 0;
    for (i = 0; i < n-1; i++) {
        scanf("%d%d%d", &x, &y, &peso);
        l[k] = y-1;
        Pesos[k] = peso;
        Nodos[k] = grafo[x-1];
        grafo[x-1] = k;
        k++;
        l[k] = x-1;
        Pesos[k] = peso;
        Nodos[k] = grafo[y-1];
        grafo[y-1] = k;
        k++;
        suma += 2*peso;
    }
    dfs(0, 0);
    printf("%lld", suma - distancia);
    return 0;
}
void dfs(int x, int d) {
    int i,y, peso;
    visitado[x] = 1;
    if (d > distancia){
        distancia = d;
    }
    for (i = grafo[x]; i != -1; i = Nodos[i]) {
         y = l[i];
        peso = Pesos[i];
        if (visitado[y]==0) {
            dfs(y, d + peso);
        }
    }
}
