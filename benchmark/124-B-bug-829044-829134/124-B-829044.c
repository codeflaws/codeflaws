#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 0x3f3f3f3f
#define TAM 128

int ans;
int n,k;
int order[TAM];
int foi[TAM];
char numbers[TAM][TAM];

int max(int a,int b){
    return (a > b)?a:b;
}

int min(int a,int b){
    return (a < b)?a:b;
}

void DFS(int p){
    int i,j;
    int maior;
    int menor;
    int aux;

    if(p == k){
        maior = 0;
        menor = INF;
        for(i = 0 ; i < n ; i++){
            aux = 0;
            for(j = 0 ; j < k ; j++){
                aux = 10*aux + (numbers[i][order[j]-1] - '0');
            }
            //printf("%d\n",aux);
            maior = max(maior,aux);
            menor = min(menor,aux);
        }

        //printf("\n\n");
        ans = min(ans,maior-menor);
        return;
    }
    else{
        for(i = 1 ; i <= k ; i++){
            if(!foi[i]){
                foi[i] = 1;
                order[p] = i;
                DFS(p+1);
                foi[i] = 0;
            }
        }
    }
}

int main(int argc, char *argv[]){
    int i;
    scanf("%d %d",&n,&k);
    for(i = 0 ; i < n ; i++)  scanf(" %s",numbers[i]);
    ans = INF;
    for(i = 1 ; i<=k ; i++) foi[i] = 0;

    for(i = 1 ; i <= k ; i++){
        order[0] = i;
        foi[i] = 1;
        DFS(1);
        foi[i] = 0;
    }
    printf("%d\n",ans);
}
