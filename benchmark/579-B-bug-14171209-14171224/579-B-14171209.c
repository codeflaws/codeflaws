#include <stdio.h>
#include <stdlib.h>

int n, tmp, r[1000001], c[1000001], res[801];

int main(int argc, char *argv[]) {
    int i, j, cur=0;
    
    scanf("%d", &n);
    for(i=2; i<=2*n; i++){
        for(j=1; j<i; i++){
            scanf("%d", &tmp);
            r[tmp] = i;
            c[tmp] = j;
        }
    }
    
    for(i=1000000; i>0; i--){
        if(r[i] != 0 && res[r[i]] == 0 && res[c[i]] == 0){
            res[r[i]] = c[i];
            res[c[i]] = r[i];
            cur++;
        }
        if(cur == n){
            break;
        }
    }
    
    for(i=1; i<=2*n; i++){
        printf("%d ", res[i]);
    }
    printf("\n");
    
    return 0;
}
